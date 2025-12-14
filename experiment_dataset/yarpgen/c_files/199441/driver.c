#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)27;
signed char var_12 = (signed char)44;
int zero = 0;
signed char var_19 = (signed char)69;
unsigned int var_20 = 2617723737U;
signed char var_21 = (signed char)79;
short var_22 = (short)10749;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
