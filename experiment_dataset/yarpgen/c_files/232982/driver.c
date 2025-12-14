#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15775076031161897378ULL;
int var_5 = 890580596;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)77;
unsigned int var_11 = 1478350489U;
unsigned int var_13 = 1966380947U;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)33895;
int zero = 0;
unsigned long long int var_17 = 10568291016366242813ULL;
signed char var_18 = (signed char)-118;
_Bool var_19 = (_Bool)0;
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
