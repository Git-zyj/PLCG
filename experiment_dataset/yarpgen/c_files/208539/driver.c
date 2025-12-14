#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
int var_4 = 2010758420;
unsigned char var_6 = (unsigned char)231;
unsigned int var_7 = 1961384329U;
unsigned int var_11 = 3930122993U;
signed char var_12 = (signed char)-56;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)80;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 948741258522826510ULL;
int var_22 = 93405843;
int var_23 = -128184422;
void init() {
}

void checksum() {
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
