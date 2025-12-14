#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1502976724;
unsigned short var_4 = (unsigned short)44241;
unsigned char var_5 = (unsigned char)115;
unsigned short var_6 = (unsigned short)28678;
long long int var_7 = 7419781939774331122LL;
unsigned int var_9 = 1887403088U;
unsigned char var_10 = (unsigned char)243;
int zero = 0;
unsigned int var_12 = 2918543347U;
unsigned long long int var_13 = 1492188059107983619ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = -7978078071286802832LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
