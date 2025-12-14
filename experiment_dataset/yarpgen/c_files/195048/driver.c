#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3352893028U;
signed char var_6 = (signed char)-78;
signed char var_7 = (signed char)-73;
signed char var_9 = (signed char)97;
unsigned int var_10 = 3754613581U;
unsigned long long int var_12 = 13285469751223987389ULL;
unsigned long long int var_13 = 8558205366766705430ULL;
int var_14 = 148574317;
int var_15 = 2010403906;
int zero = 0;
int var_18 = -976591690;
int var_19 = -884307817;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
