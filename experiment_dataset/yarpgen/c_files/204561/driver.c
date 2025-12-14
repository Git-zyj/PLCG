#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1052286065;
signed char var_2 = (signed char)-54;
unsigned int var_5 = 1134716179U;
long long int var_9 = -6826584853637529897LL;
int zero = 0;
signed char var_10 = (signed char)69;
long long int var_11 = -2700590306575517580LL;
short var_12 = (short)29401;
unsigned int var_13 = 2082733765U;
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
