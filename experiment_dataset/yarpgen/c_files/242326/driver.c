#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9354;
unsigned short var_1 = (unsigned short)63471;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 12015219763587934885ULL;
unsigned char var_9 = (unsigned char)191;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)25905;
unsigned short var_14 = (unsigned short)22050;
unsigned char var_15 = (unsigned char)213;
int zero = 0;
long long int var_17 = -2267601589090923507LL;
unsigned int var_18 = 2321293166U;
signed char var_19 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
