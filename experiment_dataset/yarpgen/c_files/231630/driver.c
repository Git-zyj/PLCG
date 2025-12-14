#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9006372675275808369LL;
unsigned short var_5 = (unsigned short)37545;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_9 = 1845363096;
short var_11 = (short)30499;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 1199416373U;
int var_15 = -852685457;
unsigned int var_16 = 1189944049U;
long long int var_17 = 4523634702244533549LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
