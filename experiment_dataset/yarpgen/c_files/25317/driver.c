#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2617099670253836530ULL;
signed char var_3 = (signed char)-69;
unsigned int var_4 = 3938582256U;
unsigned short var_8 = (unsigned short)22898;
int zero = 0;
signed char var_11 = (signed char)41;
unsigned char var_12 = (unsigned char)76;
unsigned char var_13 = (unsigned char)229;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
