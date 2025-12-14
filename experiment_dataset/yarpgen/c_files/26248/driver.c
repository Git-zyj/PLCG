#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 967818002678312184ULL;
unsigned long long int var_3 = 15399839753088525897ULL;
unsigned long long int var_6 = 11198014515924396464ULL;
short var_10 = (short)-24868;
long long int var_18 = -934517807886265069LL;
int zero = 0;
int var_19 = -1264899038;
signed char var_20 = (signed char)-24;
int var_21 = 321968561;
void init() {
}

void checksum() {
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
