#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)200;
short var_13 = (short)-20248;
int var_15 = 753277578;
int zero = 0;
signed char var_19 = (signed char)-68;
long long int var_20 = 6531453493152509616LL;
unsigned long long int var_21 = 6234037374554199642ULL;
unsigned long long int var_22 = 13549812827456420878ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
