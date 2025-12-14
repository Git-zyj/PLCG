#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4056516505U;
_Bool var_3 = (_Bool)0;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)-47;
unsigned int var_13 = 3122451023U;
int zero = 0;
long long int var_18 = 7012185799088610756LL;
unsigned int var_19 = 4172170862U;
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
