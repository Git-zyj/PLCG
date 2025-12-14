#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5833167705826697996LL;
_Bool var_7 = (_Bool)0;
int var_8 = 230994443;
int var_9 = 1217804057;
signed char var_11 = (signed char)-70;
long long int var_13 = 695192962665656066LL;
int var_15 = -249629886;
int zero = 0;
unsigned long long int var_17 = 6044951878342231270ULL;
unsigned int var_18 = 1691089049U;
unsigned long long int var_19 = 1691095679040942749ULL;
signed char var_20 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
