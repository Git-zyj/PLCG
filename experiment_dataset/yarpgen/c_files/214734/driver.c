#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16560024619102132820ULL;
unsigned short var_2 = (unsigned short)35072;
long long int var_3 = -8673144605039251321LL;
long long int var_4 = -7624948254863767050LL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_12 = (short)4397;
long long int var_13 = -4488617947340561529LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
