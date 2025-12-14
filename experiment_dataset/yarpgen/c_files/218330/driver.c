#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10126;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)79;
signed char var_7 = (signed char)49;
unsigned int var_8 = 3581571253U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-79;
signed char var_11 = (signed char)-110;
int zero = 0;
unsigned long long int var_12 = 12283219553958155984ULL;
short var_13 = (short)-30769;
signed char var_14 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
