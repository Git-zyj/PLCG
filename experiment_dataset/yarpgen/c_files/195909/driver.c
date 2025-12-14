#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -944900677;
unsigned long long int var_5 = 2877234325674862061ULL;
short var_9 = (short)22737;
signed char var_12 = (signed char)-10;
int var_13 = -46249794;
int zero = 0;
unsigned int var_14 = 3589424772U;
unsigned char var_15 = (unsigned char)252;
unsigned int var_16 = 403086150U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
