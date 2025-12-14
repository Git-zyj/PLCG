#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5273082810161092675LL;
signed char var_8 = (signed char)-31;
unsigned long long int var_9 = 11258846936426338224ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 1489737627092320776ULL;
unsigned long long int var_12 = 861533178709484133ULL;
signed char var_13 = (signed char)-6;
short var_14 = (short)-927;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
