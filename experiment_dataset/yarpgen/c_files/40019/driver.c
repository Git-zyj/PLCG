#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2261348160U;
unsigned char var_6 = (unsigned char)54;
signed char var_12 = (signed char)-92;
int zero = 0;
signed char var_13 = (signed char)-29;
unsigned long long int var_14 = 10189427343156131007ULL;
signed char var_15 = (signed char)-28;
unsigned int var_16 = 3267019040U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
