#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1797638481U;
int var_1 = -1470145386;
int var_3 = -962733699;
unsigned long long int var_6 = 11146054570005820801ULL;
unsigned long long int var_7 = 7370118989849556738ULL;
unsigned long long int var_9 = 14522552882555237214ULL;
short var_15 = (short)-6772;
int zero = 0;
unsigned long long int var_18 = 11606639306349821920ULL;
_Bool var_19 = (_Bool)1;
int var_20 = -723050008;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
