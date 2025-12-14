#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -63798495;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 1426238304U;
unsigned int var_7 = 843546784U;
unsigned int var_9 = 76007570U;
unsigned int var_10 = 3140750412U;
int var_11 = -398911126;
int var_13 = 1709945909;
signed char var_15 = (signed char)26;
int zero = 0;
int var_19 = 1121417295;
int var_20 = 51431008;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
