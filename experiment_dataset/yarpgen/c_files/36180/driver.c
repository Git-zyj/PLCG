#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4317585122014355215LL;
unsigned short var_6 = (unsigned short)19393;
int var_7 = -1942625993;
long long int var_10 = 7714350153422517558LL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1987720883U;
int zero = 0;
signed char var_16 = (signed char)92;
unsigned short var_17 = (unsigned short)4329;
unsigned short var_18 = (unsigned short)3871;
unsigned char var_19 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
