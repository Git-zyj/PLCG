#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-17584;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 11502946851100866687ULL;
long long int var_13 = 1852876292002415589LL;
int zero = 0;
short var_18 = (short)-24583;
int var_19 = -1282279571;
unsigned int var_20 = 3110816188U;
unsigned int var_21 = 2652971762U;
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
