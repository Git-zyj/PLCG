#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-63;
unsigned short var_8 = (unsigned short)10439;
unsigned short var_11 = (unsigned short)33858;
int zero = 0;
short var_14 = (short)-29997;
unsigned char var_15 = (unsigned char)154;
unsigned char var_16 = (unsigned char)174;
unsigned int var_17 = 4223576696U;
void init() {
}

void checksum() {
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
