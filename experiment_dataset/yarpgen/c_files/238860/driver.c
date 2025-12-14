#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19370;
signed char var_4 = (signed char)29;
signed char var_5 = (signed char)-35;
unsigned short var_7 = (unsigned short)56991;
short var_9 = (short)2248;
unsigned short var_11 = (unsigned short)53317;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)131;
signed char var_17 = (signed char)-123;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
