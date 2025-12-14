#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2802521725U;
signed char var_2 = (signed char)95;
unsigned long long int var_3 = 15942681672399395625ULL;
signed char var_5 = (signed char)53;
int var_6 = 554869517;
unsigned short var_8 = (unsigned short)60256;
int var_13 = -661569107;
short var_14 = (short)27681;
unsigned long long int var_17 = 17059064660060486741ULL;
unsigned long long int var_18 = 5162667901515928941ULL;
int zero = 0;
unsigned long long int var_19 = 14785180896247992880ULL;
unsigned long long int var_20 = 5985623909083017086ULL;
void init() {
}

void checksum() {
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
