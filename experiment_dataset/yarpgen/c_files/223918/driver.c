#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2994861993U;
unsigned short var_1 = (unsigned short)4358;
unsigned long long int var_2 = 1396302650449784160ULL;
int var_4 = 625234458;
int var_5 = -876428551;
unsigned short var_7 = (unsigned short)52911;
unsigned short var_8 = (unsigned short)43239;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 14736381667133425578ULL;
signed char var_13 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
