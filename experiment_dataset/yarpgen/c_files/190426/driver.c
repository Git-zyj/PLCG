#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18131251931437470552ULL;
signed char var_3 = (signed char)-104;
signed char var_12 = (signed char)11;
unsigned long long int var_15 = 13003311392591903155ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)151;
unsigned short var_21 = (unsigned short)2710;
void init() {
}

void checksum() {
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
