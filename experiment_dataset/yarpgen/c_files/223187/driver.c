#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7279964587098508888LL;
unsigned int var_2 = 262577235U;
unsigned long long int var_3 = 6428209834324515981ULL;
signed char var_8 = (signed char)-43;
signed char var_10 = (signed char)-78;
int zero = 0;
unsigned char var_12 = (unsigned char)219;
long long int var_13 = -5070232551709418644LL;
short var_14 = (short)14978;
void init() {
}

void checksum() {
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
