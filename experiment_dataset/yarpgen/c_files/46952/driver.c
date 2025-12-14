#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_5 = 3915305361525832730LL;
int var_9 = -878505899;
signed char var_10 = (signed char)76;
unsigned int var_12 = 47609210U;
int zero = 0;
long long int var_13 = -766419773817518896LL;
signed char var_14 = (signed char)72;
unsigned int var_15 = 1869855903U;
short var_16 = (short)-27413;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
