#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1817351739593635485LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)-29289;
unsigned long long int var_11 = 10255575965987682164ULL;
long long int var_12 = -3560305512297290207LL;
unsigned char var_13 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
