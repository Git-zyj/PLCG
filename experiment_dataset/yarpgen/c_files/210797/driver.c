#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)194;
short var_6 = (short)-16910;
long long int var_14 = -119292453973206798LL;
unsigned int var_17 = 4200753817U;
int zero = 0;
long long int var_19 = 6373727813755696217LL;
unsigned char var_20 = (unsigned char)94;
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
