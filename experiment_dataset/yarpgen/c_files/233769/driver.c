#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5092407033434202717LL;
int var_9 = -1521304653;
long long int var_12 = -771779910379760551LL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-18384;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = 317738804;
long long int var_21 = -4434964959408234008LL;
long long int var_22 = 1611730363202709475LL;
unsigned int var_23 = 4083816931U;
void init() {
}

void checksum() {
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
