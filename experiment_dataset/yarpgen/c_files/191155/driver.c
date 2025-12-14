#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3925086766U;
short var_5 = (short)-7962;
unsigned char var_9 = (unsigned char)100;
unsigned char var_11 = (unsigned char)84;
unsigned short var_12 = (unsigned short)2933;
unsigned char var_15 = (unsigned char)105;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)36670;
unsigned char var_19 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
