#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)41947;
unsigned int var_3 = 4206833037U;
unsigned long long int var_4 = 5336216896844407947ULL;
unsigned int var_6 = 2844245082U;
unsigned char var_10 = (unsigned char)74;
unsigned char var_11 = (unsigned char)84;
long long int var_12 = 4674797278489251355LL;
unsigned long long int var_16 = 6870686637088497608ULL;
int zero = 0;
short var_17 = (short)31772;
unsigned long long int var_18 = 10844813499357497561ULL;
void init() {
}

void checksum() {
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
