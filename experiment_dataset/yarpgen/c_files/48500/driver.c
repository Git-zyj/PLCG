#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1210704408347867111LL;
short var_3 = (short)11196;
int var_4 = -1979693401;
_Bool var_5 = (_Bool)1;
short var_8 = (short)5618;
long long int var_10 = -5897804956812967039LL;
int var_12 = 1091794512;
int var_13 = -1099985639;
int zero = 0;
int var_14 = 1050484169;
long long int var_15 = 4594652099258972137LL;
short var_16 = (short)-21289;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
