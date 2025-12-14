#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3142710125U;
unsigned short var_2 = (unsigned short)24583;
short var_4 = (short)-15522;
int var_6 = -14340871;
signed char var_8 = (signed char)72;
unsigned char var_9 = (unsigned char)29;
long long int var_10 = 4511628272156206382LL;
int zero = 0;
short var_13 = (short)28075;
long long int var_14 = -5663063781723435540LL;
signed char var_15 = (signed char)4;
void init() {
}

void checksum() {
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
