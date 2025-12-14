#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)25;
unsigned char var_18 = (unsigned char)223;
unsigned char var_19 = (unsigned char)53;
int zero = 0;
signed char var_20 = (signed char)11;
unsigned int var_21 = 1650309925U;
short var_22 = (short)13860;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
