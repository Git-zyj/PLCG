#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13288946261759399386ULL;
unsigned int var_6 = 3401723207U;
unsigned int var_7 = 1998596550U;
unsigned long long int var_8 = 17941000906451308409ULL;
unsigned long long int var_13 = 10427980524270570015ULL;
int zero = 0;
short var_14 = (short)-26732;
unsigned char var_15 = (unsigned char)146;
signed char var_16 = (signed char)61;
void init() {
}

void checksum() {
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
