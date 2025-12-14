#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2005789750;
unsigned long long int var_1 = 948676231251263153ULL;
long long int var_3 = 2318880094325077044LL;
unsigned char var_4 = (unsigned char)18;
unsigned int var_5 = 3704617123U;
int zero = 0;
signed char var_11 = (signed char)-104;
long long int var_12 = -8806408764250875340LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
