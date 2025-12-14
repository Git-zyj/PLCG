#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3930125521U;
signed char var_4 = (signed char)-52;
unsigned char var_8 = (unsigned char)208;
int zero = 0;
signed char var_18 = (signed char)92;
signed char var_19 = (signed char)-16;
int var_20 = 149043753;
unsigned int var_21 = 3120062771U;
void init() {
}

void checksum() {
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
