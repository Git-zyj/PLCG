#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2684145890411536054LL;
unsigned long long int var_1 = 10509191104512683367ULL;
unsigned long long int var_4 = 3031709508860374007ULL;
unsigned short var_5 = (unsigned short)57146;
unsigned short var_6 = (unsigned short)44636;
unsigned int var_8 = 1768993413U;
int var_9 = -1895856747;
signed char var_11 = (signed char)24;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)239;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)79;
int var_16 = -659405146;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
