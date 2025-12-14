#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)104;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)64;
int var_7 = -1916517216;
unsigned int var_8 = 3499469608U;
unsigned long long int var_10 = 12045955064501962429ULL;
short var_14 = (short)-20098;
int zero = 0;
short var_15 = (short)-20763;
signed char var_16 = (signed char)-52;
unsigned long long int var_17 = 6907551583971351891ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
