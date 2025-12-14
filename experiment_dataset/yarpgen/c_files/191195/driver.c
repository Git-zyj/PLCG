#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31900;
signed char var_3 = (signed char)-66;
_Bool var_7 = (_Bool)1;
int var_12 = -1309995124;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)102;
int var_21 = 318451087;
void init() {
}

void checksum() {
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
