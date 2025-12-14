#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -724579380674683690LL;
unsigned int var_1 = 928381621U;
unsigned int var_4 = 2162182011U;
long long int var_5 = -4291941893126285550LL;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 4114389103U;
int zero = 0;
unsigned int var_11 = 2989490121U;
long long int var_12 = 3716375383095796200LL;
short var_13 = (short)-20897;
short var_14 = (short)-30961;
unsigned int var_15 = 2717328392U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
