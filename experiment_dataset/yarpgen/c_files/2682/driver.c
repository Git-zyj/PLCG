#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1623933896;
unsigned int var_1 = 4147673382U;
unsigned int var_2 = 2205311128U;
short var_3 = (short)-10957;
unsigned int var_4 = 1168918407U;
unsigned char var_9 = (unsigned char)99;
int var_12 = -406284259;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)232;
unsigned char var_17 = (unsigned char)82;
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
