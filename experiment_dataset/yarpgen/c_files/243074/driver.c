#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3439590470U;
unsigned int var_4 = 4029144739U;
_Bool var_10 = (_Bool)1;
short var_14 = (short)-11341;
int zero = 0;
unsigned int var_19 = 3008818308U;
int var_20 = -1623444650;
void init() {
}

void checksum() {
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
