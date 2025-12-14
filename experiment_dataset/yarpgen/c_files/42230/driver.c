#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4380247395051122251LL;
signed char var_3 = (signed char)-11;
unsigned long long int var_7 = 11347030560562498528ULL;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)121;
int zero = 0;
signed char var_17 = (signed char)66;
signed char var_18 = (signed char)-15;
long long int var_19 = -2122727400927675892LL;
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
