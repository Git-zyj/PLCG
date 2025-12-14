#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)6131;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 3093859062789329029ULL;
unsigned int var_11 = 2257848238U;
short var_15 = (short)20356;
int zero = 0;
signed char var_17 = (signed char)-94;
int var_18 = -1547792727;
unsigned short var_19 = (unsigned short)1882;
unsigned short var_20 = (unsigned short)54900;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
