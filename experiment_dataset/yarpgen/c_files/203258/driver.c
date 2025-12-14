#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17993290244902767183ULL;
unsigned short var_3 = (unsigned short)7746;
_Bool var_7 = (_Bool)0;
long long int var_9 = -63534005280183782LL;
unsigned short var_11 = (unsigned short)7477;
unsigned short var_16 = (unsigned short)34893;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)26173;
unsigned char var_19 = (unsigned char)246;
unsigned int var_20 = 3780483957U;
int var_21 = -136729215;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
