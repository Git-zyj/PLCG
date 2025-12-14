#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2706477436U;
_Bool var_7 = (_Bool)0;
signed char var_17 = (signed char)77;
int zero = 0;
long long int var_18 = -6781516640295216644LL;
short var_19 = (short)15251;
int var_20 = -1970326906;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
