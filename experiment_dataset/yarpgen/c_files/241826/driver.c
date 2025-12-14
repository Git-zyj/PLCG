#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1347508874U;
int var_5 = 489298043;
signed char var_8 = (signed char)-70;
unsigned char var_10 = (unsigned char)211;
int zero = 0;
unsigned short var_12 = (unsigned short)4540;
unsigned short var_13 = (unsigned short)1845;
unsigned char var_14 = (unsigned char)139;
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
