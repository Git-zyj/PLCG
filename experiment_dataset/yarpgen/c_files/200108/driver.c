#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -403242593;
short var_2 = (short)4778;
unsigned int var_3 = 3571211861U;
unsigned short var_4 = (unsigned short)9747;
unsigned short var_5 = (unsigned short)10527;
long long int var_10 = -3616700334871134097LL;
int zero = 0;
unsigned int var_12 = 2678038499U;
unsigned short var_13 = (unsigned short)50740;
unsigned short var_14 = (unsigned short)28134;
unsigned int var_15 = 3725850924U;
short var_16 = (short)23376;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
