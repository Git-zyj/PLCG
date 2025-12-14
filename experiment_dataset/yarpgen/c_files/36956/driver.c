#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1212652966U;
signed char var_6 = (signed char)-82;
short var_8 = (short)-31397;
short var_9 = (short)-13531;
unsigned char var_10 = (unsigned char)59;
long long int var_13 = -5524912596095714008LL;
int zero = 0;
long long int var_14 = -1604088925223106545LL;
int var_15 = 1110911051;
unsigned long long int var_16 = 16477003662767574156ULL;
int var_17 = 1889774030;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
