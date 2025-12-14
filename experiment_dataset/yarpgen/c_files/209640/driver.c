#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3934191101984017597LL;
long long int var_6 = -7754571849623252544LL;
unsigned short var_9 = (unsigned short)54552;
unsigned short var_13 = (unsigned short)17065;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1531747689U;
long long int var_20 = 5842588495062503710LL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
