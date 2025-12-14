#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8233697363199910326ULL;
signed char var_4 = (signed char)19;
long long int var_7 = -1988429460887554120LL;
long long int var_9 = 81495640378273297LL;
unsigned long long int var_10 = 6130065950480395430ULL;
short var_11 = (short)-15907;
int zero = 0;
long long int var_12 = 9097987444838393070LL;
signed char var_13 = (signed char)125;
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
