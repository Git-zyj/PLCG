#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
long long int var_3 = -1881912328628719321LL;
unsigned int var_6 = 813118850U;
unsigned int var_7 = 3877028815U;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 2116294367U;
unsigned int var_16 = 3741062708U;
int var_17 = -638646763;
int zero = 0;
unsigned int var_19 = 2900607996U;
unsigned long long int var_20 = 13575791303551817583ULL;
long long int var_21 = -1127678589515177267LL;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
