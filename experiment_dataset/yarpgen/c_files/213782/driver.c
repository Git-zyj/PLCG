#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6181626044828287461LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 15649862743090388126ULL;
_Bool var_6 = (_Bool)1;
signed char var_11 = (signed char)-99;
signed char var_17 = (signed char)54;
int zero = 0;
unsigned short var_18 = (unsigned short)50519;
unsigned long long int var_19 = 5673452934773436305ULL;
void init() {
}

void checksum() {
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
