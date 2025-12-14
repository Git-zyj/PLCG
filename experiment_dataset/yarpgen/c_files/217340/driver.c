#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3715506203U;
unsigned char var_7 = (unsigned char)57;
int var_8 = -552991912;
short var_10 = (short)-26880;
short var_11 = (short)10998;
int zero = 0;
unsigned char var_15 = (unsigned char)250;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)116;
void init() {
}

void checksum() {
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
