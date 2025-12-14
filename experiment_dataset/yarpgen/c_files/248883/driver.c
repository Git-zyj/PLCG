#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59924;
long long int var_3 = -7591812427286152695LL;
unsigned short var_5 = (unsigned short)44999;
short var_6 = (short)-16150;
unsigned long long int var_8 = 12521081610119344063ULL;
short var_9 = (short)17303;
unsigned char var_12 = (unsigned char)217;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 3021600261U;
int zero = 0;
long long int var_16 = -4608993729754033515LL;
short var_17 = (short)-5949;
_Bool var_18 = (_Bool)0;
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
