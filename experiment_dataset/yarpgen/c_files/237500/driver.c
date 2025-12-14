#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-21198;
int var_3 = -1728374380;
unsigned short var_12 = (unsigned short)31802;
long long int var_14 = -2992234408363442501LL;
long long int var_16 = -8062103829680030475LL;
int zero = 0;
unsigned short var_19 = (unsigned short)3170;
int var_20 = 2033354896;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
