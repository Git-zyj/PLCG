#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2138233853772678308LL;
unsigned int var_3 = 3182408717U;
long long int var_5 = -1110575444748241981LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-24;
long long int var_15 = 6511412630684339331LL;
long long int var_16 = 1648732472444061995LL;
signed char var_17 = (signed char)13;
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
