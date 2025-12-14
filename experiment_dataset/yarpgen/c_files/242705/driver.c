#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_4 = 4228658854750573317ULL;
unsigned short var_5 = (unsigned short)52335;
unsigned long long int var_7 = 6819066296112970496ULL;
int var_9 = -1016050565;
int var_11 = 1234048039;
unsigned long long int var_16 = 2577767084223625886ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -171769387548737733LL;
signed char var_20 = (signed char)40;
signed char var_21 = (signed char)-78;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
