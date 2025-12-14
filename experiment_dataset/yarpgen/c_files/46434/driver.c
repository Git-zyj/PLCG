#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1594357400;
int var_9 = 1074766330;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)101;
unsigned short var_15 = (unsigned short)2317;
long long int var_18 = 2668969676954705453LL;
int zero = 0;
unsigned long long int var_20 = 7154336793924067016ULL;
unsigned long long int var_21 = 2245725729061856683ULL;
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
