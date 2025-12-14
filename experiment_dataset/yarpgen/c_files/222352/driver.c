#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 511888218;
int var_3 = 713552945;
unsigned char var_5 = (unsigned char)128;
long long int var_6 = -8070543338139175516LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)90;
short var_13 = (short)-10626;
int zero = 0;
int var_14 = -1213703374;
signed char var_15 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
