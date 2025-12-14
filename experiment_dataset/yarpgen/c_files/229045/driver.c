#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -206046436;
_Bool var_2 = (_Bool)1;
long long int var_8 = 1908202081877215222LL;
int var_12 = -113035092;
long long int var_15 = -3695619597416624809LL;
int zero = 0;
unsigned char var_17 = (unsigned char)67;
long long int var_18 = -7981525991417827027LL;
int var_19 = -1514894790;
unsigned char var_20 = (unsigned char)4;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
