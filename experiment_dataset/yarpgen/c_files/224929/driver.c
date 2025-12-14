#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7065414045086583721LL;
short var_2 = (short)-19474;
unsigned int var_13 = 1519669983U;
short var_14 = (short)-7812;
int var_15 = 1162520487;
int zero = 0;
unsigned int var_19 = 1205874132U;
signed char var_20 = (signed char)-27;
unsigned int var_21 = 2581364234U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
