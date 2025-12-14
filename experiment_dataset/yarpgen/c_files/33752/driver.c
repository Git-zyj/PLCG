#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
unsigned short var_1 = (unsigned short)32979;
unsigned long long int var_7 = 9121920677672106540ULL;
unsigned char var_9 = (unsigned char)170;
unsigned char var_12 = (unsigned char)108;
int zero = 0;
unsigned short var_17 = (unsigned short)62441;
unsigned int var_18 = 1198186955U;
long long int var_19 = 2387843149674943723LL;
unsigned char var_20 = (unsigned char)174;
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
