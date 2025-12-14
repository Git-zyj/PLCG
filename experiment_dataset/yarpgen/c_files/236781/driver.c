#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 6695527559345106628ULL;
int var_8 = -1579408724;
long long int var_12 = -387443371681887787LL;
unsigned long long int var_13 = 9331454650000620866ULL;
int zero = 0;
unsigned long long int var_19 = 14749564978781961304ULL;
long long int var_20 = -191490478099956232LL;
unsigned char var_21 = (unsigned char)247;
void init() {
}

void checksum() {
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
