#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -834136326670041871LL;
short var_3 = (short)-26674;
long long int var_5 = 4989520471265468794LL;
signed char var_7 = (signed char)-17;
long long int var_9 = 3577302096837223153LL;
int zero = 0;
signed char var_10 = (signed char)-96;
_Bool var_11 = (_Bool)0;
short var_12 = (short)20242;
_Bool var_13 = (_Bool)0;
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
