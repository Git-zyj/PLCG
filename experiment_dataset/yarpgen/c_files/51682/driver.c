#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6609;
unsigned short var_5 = (unsigned short)7412;
long long int var_7 = -4524067147956361857LL;
signed char var_8 = (signed char)0;
int zero = 0;
unsigned short var_13 = (unsigned short)21240;
int var_14 = 319783408;
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
