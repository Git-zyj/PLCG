#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
unsigned int var_1 = 2613423010U;
signed char var_2 = (signed char)-86;
unsigned int var_3 = 1512890254U;
long long int var_4 = 7018954127772003573LL;
int zero = 0;
signed char var_11 = (signed char)-31;
unsigned char var_12 = (unsigned char)85;
int var_13 = -665984728;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
