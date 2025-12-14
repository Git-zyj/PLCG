#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 180856524;
long long int var_1 = 214490477018940947LL;
_Bool var_4 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)77;
long long int var_14 = -3641851466427045321LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
