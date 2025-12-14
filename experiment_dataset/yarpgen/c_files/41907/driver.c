#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -333219833;
short var_3 = (short)23195;
long long int var_4 = 1109549538576654202LL;
unsigned int var_7 = 2738825839U;
_Bool var_8 = (_Bool)1;
long long int var_14 = 3789803338270283658LL;
int zero = 0;
int var_18 = 1436069430;
unsigned int var_19 = 3631972927U;
unsigned long long int var_20 = 2030920258263473945ULL;
void init() {
}

void checksum() {
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
