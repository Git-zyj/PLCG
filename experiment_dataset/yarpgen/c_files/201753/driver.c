#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 726700736303861730ULL;
unsigned int var_2 = 3329642729U;
unsigned long long int var_3 = 8179415306936876610ULL;
unsigned long long int var_4 = 4290537891934705038ULL;
long long int var_5 = 6802173424680915657LL;
unsigned long long int var_6 = 10708465797724417812ULL;
int var_7 = -586269294;
int var_9 = 1778985446;
int zero = 0;
short var_10 = (short)6676;
unsigned long long int var_11 = 470367478215100421ULL;
unsigned int var_12 = 2668538724U;
signed char var_13 = (signed char)-71;
signed char var_14 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
