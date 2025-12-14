#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25653;
long long int var_2 = -6818046857610373257LL;
unsigned short var_3 = (unsigned short)34134;
unsigned char var_5 = (unsigned char)83;
long long int var_7 = 6977867709176939782LL;
signed char var_9 = (signed char)102;
signed char var_10 = (signed char)82;
int zero = 0;
short var_14 = (short)-20004;
unsigned int var_15 = 679129255U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
