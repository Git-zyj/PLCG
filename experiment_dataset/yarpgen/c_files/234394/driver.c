#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1598113429;
unsigned int var_5 = 1801571266U;
unsigned short var_15 = (unsigned short)47379;
unsigned char var_16 = (unsigned char)38;
int zero = 0;
unsigned long long int var_20 = 8177893564922607737ULL;
unsigned long long int var_21 = 17993357451696641461ULL;
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
