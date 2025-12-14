#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4044826444196091689LL;
_Bool var_4 = (_Bool)1;
unsigned int var_7 = 1287085117U;
unsigned long long int var_9 = 9123281753328786014ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)110;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3088109502U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
