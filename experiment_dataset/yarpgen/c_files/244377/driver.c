#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18766;
unsigned int var_4 = 1133005642U;
unsigned int var_5 = 3005802908U;
int var_10 = 553006907;
int zero = 0;
short var_12 = (short)29562;
signed char var_13 = (signed char)-21;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 14908357172000827350ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
