#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -645632748;
short var_1 = (short)-18331;
int var_9 = 1471600430;
_Bool var_11 = (_Bool)1;
long long int var_18 = -3203221349606970532LL;
int zero = 0;
long long int var_19 = 8331662888114092706LL;
unsigned long long int var_20 = 5302378360700666298ULL;
signed char var_21 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
