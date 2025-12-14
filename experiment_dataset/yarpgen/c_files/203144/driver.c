#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1360480533;
signed char var_4 = (signed char)-76;
unsigned short var_6 = (unsigned short)63398;
unsigned long long int var_7 = 12288162947967814934ULL;
unsigned int var_9 = 276848844U;
signed char var_11 = (signed char)53;
signed char var_12 = (signed char)-122;
int zero = 0;
unsigned int var_14 = 2738103328U;
signed char var_15 = (signed char)-74;
unsigned int var_16 = 1178100369U;
unsigned long long int var_17 = 8729427458642814749ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
