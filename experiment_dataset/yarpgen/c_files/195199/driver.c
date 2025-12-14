#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -834639605261203452LL;
int var_3 = 1393155902;
signed char var_5 = (signed char)-15;
signed char var_8 = (signed char)-98;
unsigned int var_10 = 3500324465U;
int zero = 0;
signed char var_12 = (signed char)80;
signed char var_13 = (signed char)-118;
int var_14 = -753059297;
unsigned char var_15 = (unsigned char)174;
void init() {
}

void checksum() {
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
