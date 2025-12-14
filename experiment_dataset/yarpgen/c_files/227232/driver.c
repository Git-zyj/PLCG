#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2348355137138904088LL;
_Bool var_4 = (_Bool)0;
int var_7 = -857388822;
unsigned short var_12 = (unsigned short)41340;
long long int var_15 = 1274690445904745657LL;
int zero = 0;
unsigned int var_19 = 3271762032U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
