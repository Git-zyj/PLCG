#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)950;
unsigned short var_4 = (unsigned short)2545;
unsigned short var_7 = (unsigned short)44273;
int var_8 = 833556425;
signed char var_9 = (signed char)-110;
int zero = 0;
unsigned short var_11 = (unsigned short)37401;
unsigned int var_12 = 38787880U;
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
