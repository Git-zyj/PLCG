#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4794827381385498905LL;
_Bool var_4 = (_Bool)0;
long long int var_8 = 2336289077557474708LL;
long long int var_9 = 2006489666061575049LL;
short var_10 = (short)-17790;
int zero = 0;
long long int var_11 = -3490324348454229552LL;
signed char var_12 = (signed char)27;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1624726645U;
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
