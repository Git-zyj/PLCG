#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)13104;
unsigned int var_5 = 1707720516U;
_Bool var_11 = (_Bool)1;
unsigned int var_13 = 2975852313U;
unsigned int var_15 = 3238699095U;
long long int var_17 = -6126550377483589765LL;
int zero = 0;
int var_18 = -361688924;
unsigned int var_19 = 3280645769U;
long long int var_20 = -8196417004994719068LL;
_Bool var_21 = (_Bool)1;
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
