#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -3289672350271748519LL;
unsigned short var_8 = (unsigned short)1495;
long long int var_9 = 3310679536263642959LL;
unsigned int var_13 = 978708071U;
signed char var_14 = (signed char)-88;
int zero = 0;
unsigned short var_15 = (unsigned short)40101;
unsigned long long int var_16 = 46533312403309646ULL;
signed char var_17 = (signed char)-86;
long long int var_18 = -6806698038870958501LL;
unsigned int var_19 = 2441302639U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
