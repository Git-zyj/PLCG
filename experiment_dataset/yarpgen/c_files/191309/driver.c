#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2664090661U;
unsigned int var_1 = 342533966U;
unsigned long long int var_2 = 10516653671212244865ULL;
unsigned int var_4 = 1210030352U;
signed char var_5 = (signed char)-93;
int var_8 = 272334143;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1365301679U;
unsigned char var_11 = (unsigned char)87;
int zero = 0;
unsigned short var_12 = (unsigned short)10872;
int var_13 = 1804901368;
_Bool var_14 = (_Bool)1;
long long int var_15 = 6782098791180032885LL;
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
