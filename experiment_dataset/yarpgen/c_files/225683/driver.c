#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4675422353628353367LL;
unsigned char var_5 = (unsigned char)202;
signed char var_13 = (signed char)-18;
int zero = 0;
int var_15 = -1206599405;
unsigned int var_16 = 2906580465U;
void init() {
}

void checksum() {
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
