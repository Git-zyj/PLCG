#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)8528;
unsigned long long int var_9 = 11516836954862106342ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_18 = -710864159;
int var_19 = 229447465;
signed char var_20 = (signed char)-5;
unsigned long long int var_21 = 3769301489871281686ULL;
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
