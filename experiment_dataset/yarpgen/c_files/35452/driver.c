#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1589047218;
short var_9 = (short)15941;
int var_11 = 1300390958;
int var_14 = -353821369;
unsigned int var_16 = 4117704768U;
int var_17 = 1138440812;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)20574;
unsigned int var_20 = 3949535179U;
unsigned short var_21 = (unsigned short)10997;
signed char var_22 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
