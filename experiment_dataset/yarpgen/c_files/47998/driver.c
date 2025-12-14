#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19479;
long long int var_3 = 8116243058631758136LL;
long long int var_8 = -5660208812244886479LL;
unsigned int var_10 = 3827995597U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 974446834U;
signed char var_15 = (signed char)-38;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
