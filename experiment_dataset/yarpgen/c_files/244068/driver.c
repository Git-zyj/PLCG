#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 573405011;
long long int var_10 = 8283122027144782211LL;
int var_15 = 1402894648;
long long int var_16 = 7692490224159555726LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 142404624901767887ULL;
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
