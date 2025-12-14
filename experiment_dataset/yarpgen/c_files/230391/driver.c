#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2581349105U;
int var_6 = 242330847;
int var_7 = 2010801622;
unsigned char var_9 = (unsigned char)186;
unsigned int var_11 = 3787393121U;
int zero = 0;
signed char var_12 = (signed char)71;
signed char var_13 = (signed char)-68;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
