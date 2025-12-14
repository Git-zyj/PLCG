#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)65;
unsigned char var_4 = (unsigned char)222;
unsigned short var_5 = (unsigned short)50909;
int var_6 = 887629162;
unsigned short var_8 = (unsigned short)32729;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)155;
long long int var_15 = -4471110060763926578LL;
unsigned short var_16 = (unsigned short)4894;
_Bool var_17 = (_Bool)1;
short var_18 = (short)14142;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
