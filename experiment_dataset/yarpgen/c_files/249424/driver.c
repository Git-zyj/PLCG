#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-16494;
unsigned long long int var_12 = 4985074897802761409ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)55;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5767355599047054329ULL;
unsigned char var_18 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
