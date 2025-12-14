#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 789009868262712328ULL;
signed char var_2 = (signed char)-88;
long long int var_3 = -2198126045452641598LL;
_Bool var_4 = (_Bool)0;
long long int var_12 = -8676831078182049203LL;
long long int var_15 = -1975639207680308309LL;
int zero = 0;
unsigned short var_16 = (unsigned short)51327;
unsigned int var_17 = 3159182973U;
void init() {
}

void checksum() {
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
