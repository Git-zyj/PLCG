#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1118394866;
unsigned short var_10 = (unsigned short)52578;
unsigned short var_11 = (unsigned short)54976;
int var_12 = 1656302368;
short var_15 = (short)-31949;
int zero = 0;
long long int var_17 = -7806016596700678752LL;
unsigned int var_18 = 1374376528U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
