#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1830928525;
unsigned int var_6 = 767627795U;
unsigned short var_11 = (unsigned short)11537;
unsigned int var_13 = 2134146274U;
unsigned int var_14 = 893372853U;
int zero = 0;
int var_19 = 741248619;
signed char var_20 = (signed char)-121;
unsigned char var_21 = (unsigned char)139;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
