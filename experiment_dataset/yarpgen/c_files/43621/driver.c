#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1971139162;
unsigned long long int var_3 = 7799786749927742052ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 2206356616U;
_Bool var_9 = (_Bool)0;
int var_11 = 1491038493;
unsigned short var_15 = (unsigned short)52706;
int zero = 0;
unsigned short var_16 = (unsigned short)24502;
unsigned long long int var_17 = 10642722422703123585ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2659308447U;
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
