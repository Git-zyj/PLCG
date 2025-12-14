#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54287;
unsigned short var_1 = (unsigned short)27828;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)24850;
unsigned short var_6 = (unsigned short)32338;
unsigned short var_8 = (unsigned short)24127;
int zero = 0;
unsigned short var_10 = (unsigned short)13130;
int var_11 = 371781446;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
