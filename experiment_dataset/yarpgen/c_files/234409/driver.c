#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2370777962U;
long long int var_6 = 7277189678241352441LL;
signed char var_7 = (signed char)-54;
unsigned char var_9 = (unsigned char)184;
int zero = 0;
signed char var_11 = (signed char)-126;
long long int var_12 = 5826590040926561129LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
