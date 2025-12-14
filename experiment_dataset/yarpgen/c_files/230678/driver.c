#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)13919;
signed char var_14 = (signed char)-124;
signed char var_16 = (signed char)-127;
int zero = 0;
long long int var_20 = -1674412382191718263LL;
long long int var_21 = -2877976852059800940LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
