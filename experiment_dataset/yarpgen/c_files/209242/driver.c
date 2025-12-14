#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5478440776613659324LL;
unsigned int var_1 = 1043952957U;
unsigned char var_3 = (unsigned char)225;
unsigned char var_7 = (unsigned char)147;
signed char var_16 = (signed char)117;
int zero = 0;
unsigned long long int var_20 = 7083403651366769749ULL;
long long int var_21 = 1124401646836444088LL;
void init() {
}

void checksum() {
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
