#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 8008747522089385564ULL;
unsigned int var_9 = 1934789620U;
short var_13 = (short)-31194;
short var_18 = (short)-13989;
int zero = 0;
int var_20 = 436015102;
int var_21 = 1949026213;
unsigned char var_22 = (unsigned char)121;
void init() {
}

void checksum() {
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
