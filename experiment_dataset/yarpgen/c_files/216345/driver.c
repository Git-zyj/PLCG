#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)19232;
_Bool var_5 = (_Bool)1;
int var_6 = 369094195;
long long int var_8 = -6958747929645242531LL;
unsigned short var_9 = (unsigned short)65055;
unsigned long long int var_10 = 12721418223129638137ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)2136;
unsigned char var_15 = (unsigned char)163;
int zero = 0;
unsigned int var_17 = 3925407557U;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)59;
unsigned short var_20 = (unsigned short)17698;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
