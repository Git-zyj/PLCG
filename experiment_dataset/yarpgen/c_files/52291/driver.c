#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3859897805U;
unsigned char var_5 = (unsigned char)61;
signed char var_7 = (signed char)-109;
int zero = 0;
unsigned short var_13 = (unsigned short)35164;
unsigned short var_14 = (unsigned short)16374;
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
