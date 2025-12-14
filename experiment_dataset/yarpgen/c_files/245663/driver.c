#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 195356455047771222LL;
unsigned long long int var_1 = 12897943315228544908ULL;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)248;
unsigned long long int var_5 = 13779750798933810829ULL;
unsigned int var_6 = 928626252U;
int var_7 = 1640611728;
short var_8 = (short)26570;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-6670;
unsigned char var_11 = (unsigned char)197;
int zero = 0;
unsigned long long int var_12 = 5583396162345674094ULL;
unsigned short var_13 = (unsigned short)62637;
unsigned int var_14 = 1868786096U;
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
