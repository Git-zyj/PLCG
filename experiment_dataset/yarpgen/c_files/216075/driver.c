#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)30217;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-117;
signed char var_9 = (signed char)-45;
int var_13 = 764594229;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 11308749051138611545ULL;
int var_20 = 1315220692;
void init() {
}

void checksum() {
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
