#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 2385685561311253084ULL;
long long int var_6 = -1408378989789040079LL;
unsigned char var_7 = (unsigned char)98;
unsigned long long int var_8 = 5953838397987075858ULL;
unsigned short var_10 = (unsigned short)30428;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4079973195490416930LL;
long long int var_13 = 2045397532260377009LL;
int var_14 = 56483336;
long long int var_15 = 6768541642251556257LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
