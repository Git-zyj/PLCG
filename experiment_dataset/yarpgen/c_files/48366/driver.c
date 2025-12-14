#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1784482752;
unsigned long long int var_2 = 6842077389931144678ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)47287;
unsigned short var_5 = (unsigned short)6989;
unsigned int var_6 = 2184473137U;
int var_7 = -1780795692;
int var_8 = 1782505013;
signed char var_9 = (signed char)-88;
unsigned long long int var_12 = 13772456352832501969ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 14519679837728930185ULL;
int var_16 = -1105280026;
unsigned short var_17 = (unsigned short)48256;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
