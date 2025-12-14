#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13288;
long long int var_6 = -1300886060639718276LL;
signed char var_7 = (signed char)-76;
unsigned short var_9 = (unsigned short)21565;
long long int var_12 = 5264019439323998070LL;
short var_16 = (short)-16835;
int zero = 0;
long long int var_17 = 1882373170130097196LL;
unsigned long long int var_18 = 13793649158338359705ULL;
long long int var_19 = -2158831415704295290LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
