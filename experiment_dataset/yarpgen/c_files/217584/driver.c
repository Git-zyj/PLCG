#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53676;
unsigned char var_1 = (unsigned char)237;
short var_2 = (short)23938;
unsigned short var_7 = (unsigned short)3904;
short var_9 = (short)24267;
signed char var_12 = (signed char)-2;
int zero = 0;
int var_13 = -1683991944;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
