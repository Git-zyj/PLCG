#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 789708662U;
unsigned int var_6 = 3335171107U;
unsigned short var_10 = (unsigned short)24921;
int var_11 = 1051846774;
signed char var_14 = (signed char)-76;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -9043096217158347043LL;
unsigned long long int var_17 = 1236096599036328522ULL;
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
