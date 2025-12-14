#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3995273204598440996ULL;
int var_2 = 543682250;
signed char var_4 = (signed char)-76;
unsigned char var_9 = (unsigned char)120;
unsigned char var_10 = (unsigned char)250;
unsigned long long int var_12 = 4185977452744899552ULL;
short var_15 = (short)32522;
unsigned char var_16 = (unsigned char)36;
int zero = 0;
unsigned char var_18 = (unsigned char)51;
unsigned long long int var_19 = 13689703739970263099ULL;
signed char var_20 = (signed char)75;
short var_21 = (short)-6968;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
