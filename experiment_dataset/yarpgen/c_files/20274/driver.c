#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-8;
signed char var_5 = (signed char)-103;
int var_7 = -2091587312;
int zero = 0;
unsigned short var_18 = (unsigned short)21337;
short var_19 = (short)-3273;
unsigned short var_20 = (unsigned short)7768;
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
