#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8217;
int var_2 = -1740232365;
unsigned int var_5 = 384061392U;
signed char var_8 = (signed char)-114;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)45765;
signed char var_11 = (signed char)25;
int zero = 0;
unsigned short var_14 = (unsigned short)56017;
unsigned short var_15 = (unsigned short)51944;
unsigned long long int var_16 = 11995387026003191658ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
