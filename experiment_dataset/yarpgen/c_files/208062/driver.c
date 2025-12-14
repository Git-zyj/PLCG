#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1343723211;
unsigned long long int var_5 = 4340221331568375898ULL;
unsigned short var_6 = (unsigned short)55938;
unsigned long long int var_8 = 10447509158946429672ULL;
unsigned char var_9 = (unsigned char)137;
unsigned long long int var_10 = 18126353613464364032ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 3051599301999291224ULL;
int var_15 = 1505940767;
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
