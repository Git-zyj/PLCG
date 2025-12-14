#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13770262229753267537ULL;
_Bool var_2 = (_Bool)0;
long long int var_6 = 7352314041705873387LL;
unsigned long long int var_7 = 8472814325430873978ULL;
signed char var_8 = (signed char)-124;
unsigned int var_9 = 1479071863U;
unsigned long long int var_10 = 5419664024598705266ULL;
_Bool var_12 = (_Bool)0;
signed char var_15 = (signed char)-37;
signed char var_17 = (signed char)-52;
int zero = 0;
short var_20 = (short)-14367;
signed char var_21 = (signed char)-53;
short var_22 = (short)27725;
unsigned long long int var_23 = 12305768103206000079ULL;
signed char var_24 = (signed char)96;
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
