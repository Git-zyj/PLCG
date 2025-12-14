#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25544;
int var_6 = 537215914;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-102;
signed char var_14 = (signed char)-6;
int zero = 0;
unsigned char var_15 = (unsigned char)1;
unsigned short var_16 = (unsigned short)36187;
_Bool var_17 = (_Bool)0;
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
