#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2497730194070266249ULL;
long long int var_6 = 6414304591774126756LL;
signed char var_8 = (signed char)-102;
signed char var_10 = (signed char)-75;
signed char var_15 = (signed char)-33;
int zero = 0;
int var_17 = 360696420;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 11618942055963355945ULL;
void init() {
}

void checksum() {
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
