#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -149817572;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)32;
int zero = 0;
unsigned char var_14 = (unsigned char)207;
signed char var_15 = (signed char)111;
int var_16 = -1712846313;
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
