#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1036580779389011230ULL;
int var_4 = -954460746;
unsigned char var_8 = (unsigned char)105;
unsigned char var_9 = (unsigned char)49;
short var_12 = (short)-19063;
unsigned char var_13 = (unsigned char)64;
int var_14 = 2062956335;
int zero = 0;
unsigned char var_15 = (unsigned char)51;
unsigned long long int var_16 = 14970481002396966996ULL;
short var_17 = (short)-24804;
unsigned long long int var_18 = 5772425206210704845ULL;
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
