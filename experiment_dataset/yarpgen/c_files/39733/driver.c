#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = -3010355202656018553LL;
unsigned long long int var_7 = 14440358828766121564ULL;
unsigned short var_8 = (unsigned short)21688;
unsigned short var_10 = (unsigned short)34210;
long long int var_13 = -549310028139744623LL;
int zero = 0;
short var_16 = (short)6691;
unsigned long long int var_17 = 6312448000214445143ULL;
long long int var_18 = -3800011827790064344LL;
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
