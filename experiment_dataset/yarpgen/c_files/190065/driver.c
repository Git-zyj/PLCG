#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)98;
int var_3 = 416506530;
unsigned long long int var_6 = 18407316432352036634ULL;
unsigned int var_8 = 3417842712U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 587676890U;
long long int var_17 = 6344746457271803867LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
