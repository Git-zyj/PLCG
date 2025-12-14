#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4364412305800659655LL;
unsigned short var_3 = (unsigned short)34928;
unsigned int var_4 = 3277028641U;
unsigned short var_7 = (unsigned short)60548;
long long int var_8 = -4956516808528207418LL;
unsigned short var_10 = (unsigned short)25590;
short var_12 = (short)-6175;
int zero = 0;
unsigned short var_16 = (unsigned short)10486;
unsigned short var_17 = (unsigned short)13496;
unsigned short var_18 = (unsigned short)7803;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
