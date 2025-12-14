#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)91;
signed char var_13 = (signed char)-125;
unsigned int var_14 = 1149519663U;
long long int var_18 = -8939669625992968288LL;
int zero = 0;
signed char var_19 = (signed char)93;
int var_20 = -653033792;
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
