#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40566;
unsigned short var_1 = (unsigned short)21016;
unsigned int var_3 = 4287002235U;
int var_5 = -1384865573;
signed char var_6 = (signed char)75;
long long int var_8 = -4708242305865457756LL;
int zero = 0;
int var_11 = 1700603281;
short var_12 = (short)-14729;
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
