#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-58;
short var_6 = (short)6105;
long long int var_7 = -6072017976545113050LL;
_Bool var_9 = (_Bool)0;
long long int var_14 = -30553940257664310LL;
long long int var_17 = -8333668525865642379LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1526835879U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
