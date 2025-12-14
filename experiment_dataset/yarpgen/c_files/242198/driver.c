#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4073514316U;
unsigned int var_4 = 70457679U;
unsigned int var_6 = 4036436312U;
unsigned int var_7 = 3539868328U;
unsigned int var_8 = 2157952662U;
signed char var_9 = (signed char)-100;
int zero = 0;
signed char var_12 = (signed char)-125;
signed char var_13 = (signed char)24;
signed char var_14 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
