#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)101;
signed char var_4 = (signed char)59;
signed char var_5 = (signed char)14;
signed char var_9 = (signed char)-11;
signed char var_10 = (signed char)-124;
int zero = 0;
int var_11 = 255669842;
unsigned int var_12 = 4048562822U;
int var_13 = -1333489413;
unsigned int var_14 = 967172097U;
signed char var_15 = (signed char)-22;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
