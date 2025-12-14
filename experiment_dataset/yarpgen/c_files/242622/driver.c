#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)257;
unsigned int var_7 = 3831936148U;
unsigned int var_10 = 3855135372U;
unsigned short var_19 = (unsigned short)37631;
int zero = 0;
signed char var_20 = (signed char)79;
unsigned int var_21 = 145393010U;
signed char var_22 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
