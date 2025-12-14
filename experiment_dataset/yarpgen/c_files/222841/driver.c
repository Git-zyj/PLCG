#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-114;
unsigned long long int var_4 = 17920254760326998854ULL;
short var_10 = (short)-3569;
unsigned char var_11 = (unsigned char)141;
long long int var_12 = 1915118108312424986LL;
int zero = 0;
unsigned int var_15 = 3278998037U;
unsigned int var_16 = 335189539U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
