#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2673997105U;
unsigned short var_3 = (unsigned short)47531;
unsigned long long int var_6 = 13209209825549827362ULL;
signed char var_7 = (signed char)-66;
int zero = 0;
signed char var_14 = (signed char)-49;
int var_15 = 1208193864;
int var_16 = -1879356780;
short var_17 = (short)-19238;
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
