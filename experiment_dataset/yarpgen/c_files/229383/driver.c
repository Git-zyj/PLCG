#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1494770557;
int var_5 = -1116735104;
_Bool var_7 = (_Bool)0;
long long int var_8 = -4872659410107460579LL;
int zero = 0;
long long int var_11 = 8809155464972141010LL;
int var_12 = -1849176176;
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
