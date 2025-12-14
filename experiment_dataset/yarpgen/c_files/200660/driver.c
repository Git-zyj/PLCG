#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2423249380U;
signed char var_9 = (signed char)-46;
long long int var_11 = -801551119449459808LL;
int zero = 0;
signed char var_12 = (signed char)-56;
signed char var_13 = (signed char)-37;
void init() {
}

void checksum() {
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
