#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12635;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)13886;
int var_3 = 1149396552;
_Bool var_4 = (_Bool)0;
int var_5 = -2070429001;
long long int var_9 = 268804690240017893LL;
unsigned short var_10 = (unsigned short)48391;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 17323177866446204518ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 2788955102057001782ULL;
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
