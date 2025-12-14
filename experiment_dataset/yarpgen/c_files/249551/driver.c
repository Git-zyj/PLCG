#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5633;
unsigned char var_4 = (unsigned char)52;
unsigned long long int var_8 = 5517281332109324045ULL;
long long int var_10 = -6078570947616453425LL;
long long int var_16 = 3988985175249646082LL;
unsigned int var_17 = 4170490555U;
long long int var_19 = 7330574389134590881LL;
int zero = 0;
int var_20 = -265464029;
unsigned long long int var_21 = 3628721923113973791ULL;
void init() {
}

void checksum() {
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
