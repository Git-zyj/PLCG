#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)58232;
unsigned short var_6 = (unsigned short)62246;
unsigned short var_8 = (unsigned short)50322;
unsigned int var_9 = 1266815924U;
long long int var_11 = 6383481918447621021LL;
int zero = 0;
signed char var_13 = (signed char)-16;
signed char var_14 = (signed char)-9;
void init() {
}

void checksum() {
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
