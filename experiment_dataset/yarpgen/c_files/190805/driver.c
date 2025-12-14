#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)126;
unsigned char var_3 = (unsigned char)53;
unsigned char var_4 = (unsigned char)238;
unsigned int var_6 = 2487860607U;
int var_7 = 620467112;
int var_9 = 1183301641;
unsigned int var_10 = 2128991103U;
int zero = 0;
signed char var_12 = (signed char)-115;
unsigned long long int var_13 = 14361368081840176411ULL;
short var_14 = (short)5055;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
