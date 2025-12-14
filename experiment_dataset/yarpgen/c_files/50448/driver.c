#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 647414712566178903ULL;
unsigned long long int var_7 = 4715185775897680275ULL;
unsigned int var_16 = 2405208610U;
int var_17 = 5369241;
int zero = 0;
unsigned long long int var_19 = 12671239659165614228ULL;
unsigned long long int var_20 = 17136856202963753718ULL;
unsigned short var_21 = (unsigned short)33687;
signed char var_22 = (signed char)52;
unsigned char var_23 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
