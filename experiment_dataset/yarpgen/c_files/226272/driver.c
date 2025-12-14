#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1078528155U;
unsigned long long int var_5 = 6670935577491170119ULL;
unsigned long long int var_6 = 6469858610985150767ULL;
long long int var_9 = -5640625088975255508LL;
unsigned int var_10 = 3439364955U;
int zero = 0;
long long int var_11 = -7362101434330013571LL;
unsigned short var_12 = (unsigned short)36103;
unsigned short var_13 = (unsigned short)21652;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
