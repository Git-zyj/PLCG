#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64121;
signed char var_3 = (signed char)44;
unsigned short var_6 = (unsigned short)41125;
unsigned long long int var_9 = 8508195227201175350ULL;
unsigned long long int var_10 = 10278837964841024033ULL;
signed char var_16 = (signed char)-20;
int zero = 0;
unsigned short var_19 = (unsigned short)39527;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)100;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 9984285804445408155ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
