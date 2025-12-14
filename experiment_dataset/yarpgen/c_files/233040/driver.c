#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
unsigned char var_6 = (unsigned char)18;
short var_8 = (short)19475;
unsigned char var_9 = (unsigned char)249;
long long int var_15 = 4868448904995492849LL;
int var_18 = -1551728259;
int zero = 0;
short var_20 = (short)32058;
long long int var_21 = 8653812496990384156LL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 302386237U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
