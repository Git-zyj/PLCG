#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)15815;
short var_16 = (short)27452;
unsigned short var_18 = (unsigned short)49872;
int zero = 0;
signed char var_20 = (signed char)61;
signed char var_21 = (signed char)105;
unsigned int var_22 = 2925252597U;
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
