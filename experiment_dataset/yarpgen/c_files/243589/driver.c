#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-91;
int var_9 = 1504017837;
long long int var_10 = -6853730412018594120LL;
signed char var_14 = (signed char)-110;
signed char var_17 = (signed char)46;
signed char var_18 = (signed char)-16;
int zero = 0;
unsigned int var_19 = 2460609379U;
unsigned short var_20 = (unsigned short)53297;
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
