#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30692;
unsigned int var_2 = 804910497U;
int var_5 = -226335944;
unsigned int var_8 = 4070284929U;
signed char var_9 = (signed char)32;
int zero = 0;
int var_10 = 2139565149;
unsigned short var_11 = (unsigned short)42105;
signed char var_12 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
