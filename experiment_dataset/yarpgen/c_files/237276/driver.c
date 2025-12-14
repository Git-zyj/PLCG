#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
signed char var_5 = (signed char)17;
unsigned int var_6 = 1536131083U;
unsigned long long int var_7 = 10847846153247664905ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-28938;
int zero = 0;
int var_16 = 1562070219;
short var_17 = (short)16197;
int var_18 = 2115633257;
unsigned long long int var_19 = 10607573257389756500ULL;
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
