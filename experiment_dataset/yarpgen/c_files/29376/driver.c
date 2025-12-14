#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3417599233U;
unsigned char var_4 = (unsigned char)42;
long long int var_6 = -6135625220101300527LL;
_Bool var_7 = (_Bool)1;
int var_11 = 50910418;
signed char var_17 = (signed char)-44;
unsigned long long int var_18 = 7302514964540918164ULL;
int zero = 0;
long long int var_19 = 18213733318486743LL;
unsigned char var_20 = (unsigned char)104;
signed char var_21 = (signed char)-23;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 2650145930U;
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
