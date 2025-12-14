#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3298216701U;
long long int var_2 = -6734356738704561667LL;
unsigned short var_3 = (unsigned short)42643;
unsigned short var_4 = (unsigned short)21113;
long long int var_5 = -2092536925046239536LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 4962008752223861423ULL;
unsigned long long int var_9 = 14163971003150891187ULL;
unsigned int var_10 = 1542579812U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 422184587U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
