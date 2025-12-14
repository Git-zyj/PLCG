#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-62;
short var_3 = (short)31249;
signed char var_4 = (signed char)67;
int var_7 = -1210890233;
int var_8 = -1201853716;
unsigned long long int var_9 = 1873669264707524408ULL;
signed char var_10 = (signed char)6;
unsigned int var_11 = 3782300652U;
int var_12 = 2128181079;
long long int var_14 = -4009977077153662791LL;
int zero = 0;
unsigned int var_16 = 60196890U;
int var_17 = 860972403;
unsigned int var_18 = 4078028296U;
unsigned int var_19 = 1858756950U;
void init() {
}

void checksum() {
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
