#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2117769866;
unsigned int var_4 = 3914850719U;
int var_5 = -1494711836;
long long int var_6 = 4986090676046821045LL;
unsigned long long int var_7 = 13160436923004842749ULL;
long long int var_9 = 1856795019702727554LL;
long long int var_10 = -7859813992877457713LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 15512437706389954992ULL;
unsigned int var_15 = 3194471279U;
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
