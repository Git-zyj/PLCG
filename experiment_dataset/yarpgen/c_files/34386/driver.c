#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2123128485U;
signed char var_4 = (signed char)-111;
int var_6 = 510025972;
int zero = 0;
signed char var_11 = (signed char)-94;
unsigned int var_12 = 2623686919U;
unsigned int var_13 = 3239293385U;
signed char var_14 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
