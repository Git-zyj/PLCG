#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 576556672;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-11676;
short var_4 = (short)-5695;
signed char var_5 = (signed char)77;
long long int var_7 = -6678031880957002882LL;
short var_8 = (short)21025;
int var_9 = -390502208;
unsigned int var_10 = 2974046070U;
unsigned int var_12 = 2796974558U;
short var_13 = (short)24997;
int zero = 0;
unsigned int var_14 = 600363574U;
short var_15 = (short)10432;
signed char var_16 = (signed char)-31;
long long int var_17 = 4224731841177742701LL;
long long int var_18 = 7922431868712849176LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
