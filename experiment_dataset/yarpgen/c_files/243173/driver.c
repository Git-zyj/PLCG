#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 275065699U;
unsigned char var_3 = (unsigned char)224;
unsigned long long int var_5 = 9869068641751243058ULL;
long long int var_8 = 4725908262881700116LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_12 = -2535893616388999569LL;
_Bool var_13 = (_Bool)0;
int var_14 = -437053298;
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
