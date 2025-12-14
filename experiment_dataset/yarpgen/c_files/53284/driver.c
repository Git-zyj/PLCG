#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1101065332;
int var_4 = 904820198;
unsigned long long int var_6 = 12974264267646218956ULL;
int var_7 = 1907477380;
unsigned int var_8 = 3261230711U;
int var_9 = 2083173026;
unsigned long long int var_12 = 13961010303774437278ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3653360597U;
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
