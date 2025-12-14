#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4112892812123459214LL;
long long int var_9 = 2328274767825093442LL;
unsigned long long int var_11 = 16636382857026725327ULL;
short var_12 = (short)-13932;
int var_13 = 664167491;
short var_15 = (short)-29055;
int zero = 0;
long long int var_20 = -7581024281397761574LL;
short var_21 = (short)-28775;
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
