#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6083828536076038295ULL;
_Bool var_7 = (_Bool)0;
int var_8 = 1324284676;
unsigned short var_9 = (unsigned short)37790;
short var_11 = (short)32450;
unsigned long long int var_13 = 12235678797274683367ULL;
unsigned long long int var_15 = 9720754966585790512ULL;
int zero = 0;
int var_16 = 2115494906;
int var_17 = 1420976844;
unsigned short var_18 = (unsigned short)26765;
void init() {
}

void checksum() {
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
