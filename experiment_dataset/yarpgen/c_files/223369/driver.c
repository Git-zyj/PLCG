#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
long long int var_4 = 4943057840445710966LL;
long long int var_5 = 8883521388310670160LL;
short var_6 = (short)-20114;
signed char var_8 = (signed char)20;
short var_10 = (short)28877;
unsigned short var_11 = (unsigned short)45865;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)16;
unsigned short var_15 = (unsigned short)19871;
unsigned short var_17 = (unsigned short)31156;
short var_18 = (short)9965;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 14985287454985979738ULL;
int var_23 = -837677020;
short var_24 = (short)-12066;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
