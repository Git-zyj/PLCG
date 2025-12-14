#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 844214654;
unsigned char var_3 = (unsigned char)158;
_Bool var_4 = (_Bool)0;
long long int var_6 = -2709360072111645187LL;
unsigned int var_7 = 2935193063U;
int zero = 0;
unsigned long long int var_10 = 3781958726480899715ULL;
unsigned int var_11 = 729633884U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
