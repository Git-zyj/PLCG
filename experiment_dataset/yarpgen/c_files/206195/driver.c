#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 287599006U;
unsigned long long int var_4 = 10188663059892585537ULL;
signed char var_6 = (signed char)-87;
int zero = 0;
unsigned long long int var_10 = 1367038706292137242ULL;
short var_11 = (short)-1788;
short var_12 = (short)7933;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
