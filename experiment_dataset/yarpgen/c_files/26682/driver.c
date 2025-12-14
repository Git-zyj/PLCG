#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 484263814U;
long long int var_2 = -7631109037687160976LL;
unsigned int var_5 = 4146339332U;
int zero = 0;
signed char var_12 = (signed char)-14;
long long int var_13 = 5923323469636262756LL;
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
