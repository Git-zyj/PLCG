#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
unsigned short var_2 = (unsigned short)20368;
unsigned short var_6 = (unsigned short)48543;
short var_10 = (short)-27802;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 1774537504974192427ULL;
unsigned long long int var_21 = 13394843708950270329ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
