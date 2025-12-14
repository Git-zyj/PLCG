#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
unsigned int var_1 = 2827997679U;
unsigned short var_2 = (unsigned short)64792;
unsigned char var_3 = (unsigned char)254;
int var_7 = -1985337251;
unsigned long long int var_9 = 3338809825776776879ULL;
long long int var_11 = 824599074238960361LL;
int zero = 0;
unsigned char var_12 = (unsigned char)176;
short var_13 = (short)30538;
signed char var_14 = (signed char)103;
int var_15 = 603800438;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
