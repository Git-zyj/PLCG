#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10328870582934272672ULL;
unsigned int var_6 = 1389719515U;
unsigned int var_7 = 2564187366U;
signed char var_8 = (signed char)-8;
long long int var_9 = -188959193283229727LL;
_Bool var_13 = (_Bool)1;
unsigned short var_18 = (unsigned short)6972;
int zero = 0;
unsigned int var_19 = 1489850793U;
signed char var_20 = (signed char)-8;
void init() {
}

void checksum() {
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
