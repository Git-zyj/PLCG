#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)18607;
int var_3 = -1543436679;
unsigned short var_4 = (unsigned short)28746;
long long int var_5 = 6198373683809279712LL;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)723;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3354901278307828641LL;
int zero = 0;
int var_12 = -1855315236;
long long int var_13 = 798756296420766264LL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
