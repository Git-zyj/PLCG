#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13122755895355346514ULL;
short var_3 = (short)15386;
unsigned int var_4 = 2983453111U;
unsigned int var_5 = 1146475587U;
int var_7 = 1001721233;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2749046384U;
short var_14 = (short)-7580;
long long int var_15 = 8202503277168905087LL;
void init() {
}

void checksum() {
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
