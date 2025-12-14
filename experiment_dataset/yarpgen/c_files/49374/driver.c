#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19013;
signed char var_9 = (signed char)-13;
long long int var_13 = 1607694505215357180LL;
_Bool var_17 = (_Bool)1;
long long int var_19 = -913823056840624248LL;
int zero = 0;
short var_20 = (short)-22489;
signed char var_21 = (signed char)-1;
unsigned char var_22 = (unsigned char)31;
_Bool var_23 = (_Bool)1;
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
