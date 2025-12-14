#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8571542706259057547ULL;
short var_2 = (short)25437;
short var_5 = (short)-32157;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 317588989U;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)45898;
unsigned long long int var_11 = 1597443978608839985ULL;
_Bool var_12 = (_Bool)1;
int var_13 = -1432745813;
int zero = 0;
short var_14 = (short)16136;
signed char var_15 = (signed char)-79;
void init() {
}

void checksum() {
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
