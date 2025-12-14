#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)94;
unsigned char var_6 = (unsigned char)217;
unsigned char var_7 = (unsigned char)151;
unsigned int var_8 = 1410553137U;
unsigned int var_9 = 1356009650U;
int zero = 0;
short var_14 = (short)3293;
unsigned char var_15 = (unsigned char)167;
unsigned int var_16 = 3963301907U;
unsigned int var_17 = 763513605U;
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
