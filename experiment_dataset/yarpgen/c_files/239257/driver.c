#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
unsigned char var_2 = (unsigned char)61;
signed char var_4 = (signed char)-97;
unsigned int var_11 = 1411625528U;
int zero = 0;
int var_12 = 871114183;
unsigned int var_13 = 4280286270U;
unsigned long long int var_14 = 4514205363372687454ULL;
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
