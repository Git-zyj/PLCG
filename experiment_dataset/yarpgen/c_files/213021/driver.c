#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6946812291918251548LL;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-26770;
unsigned char var_12 = (unsigned char)170;
int var_16 = 1164381487;
int zero = 0;
signed char var_18 = (signed char)-31;
int var_19 = 1953763807;
unsigned char var_20 = (unsigned char)20;
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
