#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -664506099;
unsigned char var_10 = (unsigned char)210;
unsigned long long int var_18 = 10953389279157710618ULL;
int zero = 0;
unsigned long long int var_20 = 7621886509898785890ULL;
int var_21 = -1459887885;
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
