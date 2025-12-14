#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7334;
unsigned char var_6 = (unsigned char)85;
int var_7 = 1401358219;
int var_8 = -2126324535;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 10246993182376333451ULL;
unsigned long long int var_12 = 12538975931625780989ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
