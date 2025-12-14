#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)146;
unsigned char var_4 = (unsigned char)247;
int var_5 = -248882272;
short var_9 = (short)-18225;
int zero = 0;
unsigned short var_13 = (unsigned short)40890;
short var_14 = (short)-31784;
short var_15 = (short)32234;
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
