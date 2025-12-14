#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 276438815U;
unsigned char var_4 = (unsigned char)38;
unsigned int var_8 = 3218828959U;
signed char var_9 = (signed char)-5;
signed char var_12 = (signed char)-47;
signed char var_14 = (signed char)-45;
int zero = 0;
unsigned char var_15 = (unsigned char)161;
unsigned long long int var_16 = 2900076275259333409ULL;
signed char var_17 = (signed char)39;
signed char var_18 = (signed char)35;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
