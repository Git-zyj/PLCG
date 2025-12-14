#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5179559483933559263ULL;
long long int var_7 = -9068617808472152943LL;
int var_10 = -106289789;
int zero = 0;
long long int var_17 = -2116327202941131976LL;
long long int var_18 = -7792145333528997721LL;
short var_19 = (short)-29240;
unsigned int var_20 = 4229638290U;
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
