#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3178484616785919452ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_15 = (unsigned short)12629;
unsigned long long int var_18 = 10568894643301402408ULL;
int zero = 0;
signed char var_20 = (signed char)-105;
unsigned int var_21 = 892885216U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
