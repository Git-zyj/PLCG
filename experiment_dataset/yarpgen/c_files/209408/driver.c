#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9896502552656097896ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 1556771916839656245ULL;
long long int var_10 = 387360064866020004LL;
int zero = 0;
int var_17 = -711925129;
unsigned long long int var_18 = 9549973146186664977ULL;
unsigned short var_19 = (unsigned short)32926;
_Bool var_20 = (_Bool)0;
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
