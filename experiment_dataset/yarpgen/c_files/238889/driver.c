#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3347423867737451192LL;
unsigned long long int var_2 = 6706272463906610947ULL;
signed char var_10 = (signed char)1;
int var_13 = 708127661;
short var_14 = (short)20090;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_18 = -5032080873983034013LL;
unsigned int var_19 = 2010135669U;
unsigned long long int var_20 = 17635053750422844246ULL;
short var_21 = (short)9334;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
