#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3882142234U;
unsigned int var_2 = 2388277457U;
signed char var_3 = (signed char)29;
unsigned long long int var_4 = 6336862379823274320ULL;
unsigned int var_5 = 3449048999U;
unsigned long long int var_7 = 5004742001145826943ULL;
unsigned char var_8 = (unsigned char)75;
signed char var_9 = (signed char)-112;
int var_10 = -1130931231;
int zero = 0;
unsigned short var_11 = (unsigned short)64762;
unsigned int var_12 = 1147625870U;
void init() {
}

void checksum() {
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
