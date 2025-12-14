#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-49;
long long int var_4 = 40173918322832759LL;
unsigned short var_6 = (unsigned short)12872;
long long int var_17 = -5397468065485418376LL;
int zero = 0;
signed char var_19 = (signed char)86;
unsigned short var_20 = (unsigned short)11484;
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
