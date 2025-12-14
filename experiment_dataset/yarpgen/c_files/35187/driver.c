#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4142912293002243252LL;
long long int var_8 = 8288848007066906480LL;
int var_13 = -309786036;
int zero = 0;
unsigned int var_17 = 3343061290U;
signed char var_18 = (signed char)-114;
long long int var_19 = 4243678114837541946LL;
short var_20 = (short)30664;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
