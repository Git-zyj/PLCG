#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 6330484076902160083ULL;
long long int var_6 = -3290895074379449393LL;
unsigned long long int var_12 = 13179577489752875585ULL;
unsigned int var_14 = 3631372921U;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10468016190468046747ULL;
void init() {
}

void checksum() {
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
