#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2302255524U;
unsigned long long int var_5 = 14749044974941305796ULL;
unsigned int var_10 = 2232180596U;
unsigned int var_11 = 735179032U;
signed char var_12 = (signed char)48;
signed char var_13 = (signed char)-101;
int zero = 0;
unsigned long long int var_16 = 11763925917418304719ULL;
unsigned short var_17 = (unsigned short)15874;
signed char var_18 = (signed char)113;
unsigned char var_19 = (unsigned char)160;
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
