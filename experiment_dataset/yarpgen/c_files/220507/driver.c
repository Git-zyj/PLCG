#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)180;
int var_9 = -1397825271;
signed char var_10 = (signed char)-90;
short var_13 = (short)6974;
int zero = 0;
unsigned int var_15 = 854617950U;
unsigned short var_16 = (unsigned short)26043;
void init() {
}

void checksum() {
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
