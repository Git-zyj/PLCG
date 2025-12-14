#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)1;
unsigned short var_9 = (unsigned short)7740;
unsigned short var_11 = (unsigned short)18984;
unsigned char var_13 = (unsigned char)189;
unsigned int var_16 = 2899731315U;
int zero = 0;
int var_17 = -2023151133;
int var_18 = 1419509582;
unsigned long long int var_19 = 5930700254488700232ULL;
unsigned long long int var_20 = 4991652127365893337ULL;
int var_21 = 2095540798;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
