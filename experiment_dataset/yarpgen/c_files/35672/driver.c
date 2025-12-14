#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-34;
long long int var_1 = 2759979228318387477LL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 7778658840820696348ULL;
unsigned int var_6 = 1996714038U;
int zero = 0;
short var_10 = (short)13777;
unsigned long long int var_11 = 5793886930659044332ULL;
unsigned int var_12 = 885741560U;
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
