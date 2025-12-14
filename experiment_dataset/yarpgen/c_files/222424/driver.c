#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14769526396904608248ULL;
unsigned int var_16 = 3284086967U;
int zero = 0;
unsigned long long int var_18 = 1448639259214864826ULL;
unsigned long long int var_19 = 4001589003410977098ULL;
unsigned int var_20 = 2685954355U;
unsigned long long int var_21 = 14646085517371350319ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
