#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)36;
int var_4 = -989375385;
unsigned int var_12 = 3075340990U;
unsigned int var_15 = 3950669597U;
int zero = 0;
unsigned long long int var_16 = 15320063233024253789ULL;
short var_17 = (short)8803;
unsigned short var_18 = (unsigned short)19006;
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
