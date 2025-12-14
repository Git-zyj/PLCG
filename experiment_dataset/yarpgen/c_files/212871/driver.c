#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
signed char var_3 = (signed char)110;
short var_4 = (short)-5379;
unsigned short var_9 = (unsigned short)46354;
_Bool var_11 = (_Bool)1;
long long int var_13 = 4812236994551857481LL;
int var_14 = 2118897057;
int zero = 0;
unsigned char var_16 = (unsigned char)89;
unsigned short var_17 = (unsigned short)58457;
_Bool var_18 = (_Bool)1;
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
