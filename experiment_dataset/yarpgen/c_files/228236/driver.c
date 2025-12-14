#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)168;
unsigned char var_4 = (unsigned char)227;
unsigned long long int var_7 = 11749979011573011104ULL;
short var_11 = (short)26876;
int var_12 = -1496215277;
short var_13 = (short)9982;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_17 = -345575397;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 2278998407390594297ULL;
short var_20 = (short)-30209;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
