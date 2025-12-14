#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_6 = 611688335;
signed char var_9 = (signed char)36;
long long int var_11 = -2949651149452509289LL;
int zero = 0;
int var_17 = -855517260;
int var_18 = -1845715262;
unsigned int var_19 = 986060492U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
