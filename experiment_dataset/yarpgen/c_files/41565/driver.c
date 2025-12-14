#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)209;
short var_7 = (short)-8485;
short var_10 = (short)499;
short var_13 = (short)-28872;
short var_14 = (short)4754;
unsigned short var_15 = (unsigned short)34385;
unsigned short var_16 = (unsigned short)5474;
int zero = 0;
unsigned short var_18 = (unsigned short)40166;
short var_19 = (short)-13972;
unsigned short var_20 = (unsigned short)31181;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
