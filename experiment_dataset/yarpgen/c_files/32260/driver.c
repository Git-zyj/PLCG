#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15547803994500996555ULL;
_Bool var_2 = (_Bool)1;
int var_3 = 774422541;
unsigned int var_4 = 3278940650U;
unsigned char var_7 = (unsigned char)78;
short var_8 = (short)24038;
long long int var_11 = -6518093699878306158LL;
int zero = 0;
unsigned int var_13 = 2209775601U;
unsigned int var_14 = 3545662775U;
signed char var_15 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
