#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3553923175141921837ULL;
short var_7 = (short)-290;
unsigned long long int var_9 = 12625570379491101313ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 11861278305265423475ULL;
unsigned long long int var_17 = 79358842240301096ULL;
unsigned char var_18 = (unsigned char)84;
short var_19 = (short)15788;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
