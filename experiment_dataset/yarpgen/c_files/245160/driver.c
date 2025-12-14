#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1444877297U;
unsigned long long int var_1 = 9144859668258722155ULL;
unsigned long long int var_3 = 5082314768252880047ULL;
_Bool var_5 = (_Bool)0;
int zero = 0;
long long int var_11 = 5855836034212496822LL;
signed char var_12 = (signed char)-62;
unsigned int var_13 = 2659937219U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
