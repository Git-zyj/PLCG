#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1136;
long long int var_4 = 6077871858588264134LL;
long long int var_6 = 8467088771769241521LL;
int zero = 0;
unsigned int var_12 = 1943881132U;
long long int var_13 = 1578137283429200006LL;
long long int var_14 = 5346256044570790166LL;
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
