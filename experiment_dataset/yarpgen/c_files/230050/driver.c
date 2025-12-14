#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3937977449380352285ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 6789984504755435700ULL;
short var_11 = (short)12639;
int zero = 0;
signed char var_13 = (signed char)118;
unsigned char var_14 = (unsigned char)118;
unsigned char var_15 = (unsigned char)153;
unsigned char var_16 = (unsigned char)236;
signed char var_17 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
