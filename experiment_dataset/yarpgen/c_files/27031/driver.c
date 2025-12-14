#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4151810573U;
int var_9 = 105696856;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-10218;
signed char var_12 = (signed char)-113;
short var_13 = (short)-14796;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
