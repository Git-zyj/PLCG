#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)32267;
unsigned char var_5 = (unsigned char)32;
signed char var_12 = (signed char)44;
unsigned long long int var_16 = 11884350170629902220ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)8958;
unsigned char var_20 = (unsigned char)47;
int var_21 = 667111912;
signed char var_22 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
