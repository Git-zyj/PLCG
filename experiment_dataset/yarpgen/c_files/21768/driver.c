#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1023920325;
unsigned long long int var_1 = 6033070570385683653ULL;
unsigned int var_4 = 789394960U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int zero = 0;
int var_10 = -297166008;
long long int var_11 = 3894679302182593738LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
