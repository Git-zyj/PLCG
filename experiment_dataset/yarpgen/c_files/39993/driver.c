#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5946066917983185132ULL;
long long int var_12 = -8666671514403166692LL;
unsigned long long int var_19 = 17162409118835243408ULL;
int zero = 0;
signed char var_20 = (signed char)102;
unsigned long long int var_21 = 18141091374518993349ULL;
signed char var_22 = (signed char)19;
signed char var_23 = (signed char)-56;
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
