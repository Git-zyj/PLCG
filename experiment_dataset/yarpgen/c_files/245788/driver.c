#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)28420;
signed char var_8 = (signed char)-73;
long long int var_11 = -509325839899496066LL;
int zero = 0;
long long int var_13 = 3153681862089000270LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)9106;
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
