#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2562557290121787453ULL;
short var_3 = (short)9105;
short var_5 = (short)5738;
_Bool var_8 = (_Bool)0;
long long int var_9 = 7174221864488745063LL;
int var_12 = -897761899;
unsigned long long int var_13 = 333950393581439718ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 13329687524352774073ULL;
unsigned int var_17 = 3302298910U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
