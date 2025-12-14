#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2024272295;
int var_2 = 1561186557;
short var_3 = (short)-31864;
short var_4 = (short)-15853;
int var_5 = -812853782;
int var_8 = 1207308594;
short var_9 = (short)27989;
int zero = 0;
int var_10 = 1609689275;
short var_11 = (short)-17819;
short var_12 = (short)-10914;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
