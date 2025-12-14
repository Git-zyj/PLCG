#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1614133445821916037LL;
unsigned short var_4 = (unsigned short)14520;
short var_5 = (short)-4024;
int zero = 0;
unsigned int var_13 = 500145002U;
signed char var_14 = (signed char)-9;
unsigned int var_15 = 1458669973U;
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
