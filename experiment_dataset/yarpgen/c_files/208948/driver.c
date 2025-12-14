#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3947110676U;
int var_3 = -2106433220;
unsigned short var_7 = (unsigned short)56921;
signed char var_9 = (signed char)-51;
int zero = 0;
unsigned char var_10 = (unsigned char)1;
signed char var_11 = (signed char)-68;
int var_12 = -164881386;
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
