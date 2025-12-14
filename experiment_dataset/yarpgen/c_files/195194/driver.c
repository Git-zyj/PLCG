#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31427;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_17 = (unsigned char)220;
int zero = 0;
int var_20 = -1477365701;
unsigned char var_21 = (unsigned char)254;
unsigned short var_22 = (unsigned short)41312;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
