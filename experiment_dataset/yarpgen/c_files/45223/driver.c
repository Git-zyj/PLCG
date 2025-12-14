#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)117;
short var_2 = (short)-6894;
long long int var_5 = -5345994365326110654LL;
long long int var_6 = -2149464000753582313LL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)89;
int zero = 0;
long long int var_10 = 4102847995359560083LL;
int var_11 = -24445921;
int var_12 = -1661967608;
short var_13 = (short)8212;
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
