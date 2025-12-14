#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7763608394381070752ULL;
unsigned short var_5 = (unsigned short)7190;
signed char var_6 = (signed char)-84;
int zero = 0;
unsigned int var_12 = 3215191427U;
signed char var_13 = (signed char)-11;
unsigned char var_14 = (unsigned char)19;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
