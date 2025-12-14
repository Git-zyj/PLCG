#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10102203289526019414ULL;
unsigned long long int var_1 = 17761379992848190525ULL;
unsigned char var_2 = (unsigned char)120;
unsigned long long int var_8 = 14964013422165442206ULL;
unsigned long long int var_14 = 9888560354197357612ULL;
int zero = 0;
int var_16 = 351366887;
signed char var_17 = (signed char)51;
void init() {
}

void checksum() {
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
