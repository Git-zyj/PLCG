#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6206009723594159368LL;
unsigned long long int var_4 = 4333302408646237349ULL;
int var_6 = -683599850;
unsigned long long int var_8 = 1772850954684513592ULL;
unsigned int var_10 = 3245795226U;
unsigned char var_13 = (unsigned char)99;
long long int var_14 = 527676125331332243LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-6617;
int zero = 0;
long long int var_17 = 6455510938095983145LL;
short var_18 = (short)14668;
int var_19 = -717641874;
unsigned int var_20 = 2728542888U;
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
