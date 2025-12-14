#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1981696113U;
long long int var_4 = -4447947382803291710LL;
unsigned int var_7 = 3428270596U;
signed char var_11 = (signed char)61;
int zero = 0;
long long int var_12 = -7516280266714995119LL;
unsigned int var_13 = 4251366032U;
int var_14 = 2035156699;
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
