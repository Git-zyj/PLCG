#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 749977393U;
int var_5 = 1845782646;
unsigned short var_8 = (unsigned short)11621;
short var_9 = (short)-13647;
int zero = 0;
unsigned long long int var_10 = 3944303338288529639ULL;
int var_11 = 405536551;
unsigned int var_12 = 971644152U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
