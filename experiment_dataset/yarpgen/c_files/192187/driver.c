#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1570637520;
unsigned int var_5 = 3628450842U;
int var_9 = 459480081;
unsigned int var_10 = 1519365007U;
unsigned char var_12 = (unsigned char)186;
int var_14 = -2010511320;
int zero = 0;
int var_19 = 714813911;
unsigned int var_20 = 3061744385U;
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
