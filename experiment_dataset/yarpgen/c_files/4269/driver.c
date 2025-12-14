#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 14509464U;
unsigned int var_2 = 67928334U;
int var_3 = 281648730;
unsigned int var_7 = 2613610618U;
signed char var_8 = (signed char)66;
unsigned short var_9 = (unsigned short)1532;
int zero = 0;
signed char var_11 = (signed char)-83;
unsigned int var_12 = 2326784919U;
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
