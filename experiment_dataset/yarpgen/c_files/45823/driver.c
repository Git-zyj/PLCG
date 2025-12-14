#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
int var_5 = 1376580074;
unsigned long long int var_8 = 17497085391963998473ULL;
int zero = 0;
long long int var_12 = -8872440565654106838LL;
unsigned short var_13 = (unsigned short)59051;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
