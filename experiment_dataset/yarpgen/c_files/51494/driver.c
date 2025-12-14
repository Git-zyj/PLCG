#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6026935534317377736ULL;
long long int var_9 = -8644327160674155323LL;
unsigned long long int var_11 = 5515846005886078383ULL;
signed char var_12 = (signed char)60;
int zero = 0;
unsigned long long int var_13 = 185625435748414269ULL;
short var_14 = (short)10530;
short var_15 = (short)-11960;
void init() {
}

void checksum() {
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
