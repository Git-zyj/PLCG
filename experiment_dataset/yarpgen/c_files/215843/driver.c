#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 792349699U;
short var_1 = (short)10366;
unsigned char var_2 = (unsigned char)215;
int var_6 = -1610714287;
unsigned char var_9 = (unsigned char)173;
unsigned int var_10 = 3948004076U;
int zero = 0;
signed char var_12 = (signed char)120;
unsigned int var_13 = 1312155371U;
short var_14 = (short)4700;
short var_15 = (short)15387;
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
