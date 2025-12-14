#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1960961841U;
long long int var_1 = -4221485122471001575LL;
unsigned long long int var_2 = 4086879018646954862ULL;
unsigned short var_3 = (unsigned short)8078;
unsigned int var_9 = 2931649337U;
int zero = 0;
long long int var_10 = -3966654918734993300LL;
long long int var_11 = 3247154942761808344LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
