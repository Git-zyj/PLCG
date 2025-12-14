#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17221817579205444376ULL;
unsigned long long int var_2 = 11707575398597172656ULL;
unsigned int var_3 = 515235291U;
short var_6 = (short)-5943;
unsigned int var_9 = 3285143898U;
unsigned int var_11 = 903981801U;
signed char var_14 = (signed char)28;
int zero = 0;
signed char var_16 = (signed char)37;
short var_17 = (short)-18333;
unsigned char var_18 = (unsigned char)108;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
