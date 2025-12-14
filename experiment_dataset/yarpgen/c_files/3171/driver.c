#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4662725244957623416ULL;
unsigned short var_3 = (unsigned short)52778;
signed char var_4 = (signed char)63;
unsigned short var_7 = (unsigned short)7213;
signed char var_8 = (signed char)-86;
short var_9 = (short)-5918;
int zero = 0;
signed char var_11 = (signed char)-110;
signed char var_12 = (signed char)-76;
void init() {
}

void checksum() {
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
