#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 759748051U;
long long int var_3 = -8577033835304448521LL;
int var_7 = -1901707844;
unsigned char var_8 = (unsigned char)106;
short var_12 = (short)-29984;
int var_13 = -1506674588;
unsigned char var_14 = (unsigned char)250;
int zero = 0;
unsigned short var_15 = (unsigned short)51735;
unsigned short var_16 = (unsigned short)62362;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
