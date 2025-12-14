#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 353004914U;
unsigned int var_6 = 91642498U;
int var_13 = -876837846;
int zero = 0;
unsigned int var_19 = 463209317U;
signed char var_20 = (signed char)-113;
unsigned short var_21 = (unsigned short)1258;
void init() {
}

void checksum() {
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
