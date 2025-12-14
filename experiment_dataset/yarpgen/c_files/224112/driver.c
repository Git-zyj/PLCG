#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2513850439313320766LL;
_Bool var_2 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
