#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8853650705093341855ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 11145619085532089906ULL;
unsigned long long int var_10 = 17607564515886968212ULL;
signed char var_18 = (signed char)-87;
int zero = 0;
int var_20 = 305533613;
int var_21 = 1631512175;
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
