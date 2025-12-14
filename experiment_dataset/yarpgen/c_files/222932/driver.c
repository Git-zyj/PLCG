#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12237876609247566396ULL;
short var_8 = (short)27536;
signed char var_11 = (signed char)76;
long long int var_12 = -1435200116180761521LL;
unsigned int var_13 = 921938424U;
signed char var_18 = (signed char)22;
int zero = 0;
long long int var_19 = -1508100989196516413LL;
unsigned int var_20 = 2001071921U;
long long int var_21 = -7501286940584783730LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
