#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10352189226200713532ULL;
signed char var_8 = (signed char)65;
short var_9 = (short)9420;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = -5438568539961077876LL;
short var_13 = (short)28570;
long long int var_14 = 5926323808667373334LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
