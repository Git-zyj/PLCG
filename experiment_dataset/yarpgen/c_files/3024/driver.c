#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
signed char var_2 = (signed char)98;
unsigned short var_3 = (unsigned short)7092;
signed char var_8 = (signed char)-88;
signed char var_11 = (signed char)58;
int zero = 0;
unsigned int var_12 = 2678833248U;
signed char var_13 = (signed char)-58;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
