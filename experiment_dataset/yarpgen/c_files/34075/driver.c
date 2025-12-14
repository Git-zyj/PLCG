#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)1494;
_Bool var_4 = (_Bool)0;
long long int var_5 = 1360321353192208640LL;
signed char var_10 = (signed char)-69;
unsigned short var_14 = (unsigned short)22762;
unsigned short var_15 = (unsigned short)8979;
int zero = 0;
int var_18 = -861276428;
int var_19 = 866518432;
long long int var_20 = -7745567613640999429LL;
long long int var_21 = -2863270354486631118LL;
long long int var_22 = 5293872019966268748LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
