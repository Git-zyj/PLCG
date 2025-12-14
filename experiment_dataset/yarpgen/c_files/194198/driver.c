#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)84;
unsigned int var_5 = 3885353611U;
int var_8 = 1821513838;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 2020386562U;
unsigned long long int var_21 = 9994230478465583953ULL;
void init() {
}

void checksum() {
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
