#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
int var_6 = -1758249764;
int var_7 = 1194710662;
unsigned char var_9 = (unsigned char)224;
int var_12 = 1539662985;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 1338135966;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
