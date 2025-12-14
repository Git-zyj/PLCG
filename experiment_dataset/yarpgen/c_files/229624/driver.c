#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8554039519224633646ULL;
unsigned short var_2 = (unsigned short)33959;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)115;
unsigned int var_11 = 28931335U;
short var_12 = (short)28096;
int zero = 0;
unsigned char var_14 = (unsigned char)249;
unsigned long long int var_15 = 15244308362931834601ULL;
long long int var_16 = -7874262137202416228LL;
unsigned long long int var_17 = 16681468691160030022ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
