#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)16795;
short var_11 = (short)5291;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)36741;
unsigned char var_16 = (unsigned char)118;
signed char var_17 = (signed char)-12;
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
