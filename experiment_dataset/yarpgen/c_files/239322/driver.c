#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)119;
signed char var_8 = (signed char)-123;
signed char var_9 = (signed char)-98;
short var_10 = (short)26735;
int var_12 = -911607249;
int zero = 0;
unsigned short var_14 = (unsigned short)31122;
unsigned char var_15 = (unsigned char)248;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
