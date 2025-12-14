#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21170;
long long int var_2 = -4017701871814709512LL;
unsigned long long int var_6 = 12281234230970856569ULL;
short var_8 = (short)20372;
int zero = 0;
int var_12 = 1551917347;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2783374333176898067LL;
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
