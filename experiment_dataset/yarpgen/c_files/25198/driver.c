#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)17283;
unsigned int var_9 = 3894133148U;
signed char var_12 = (signed char)-71;
int var_14 = 606960203;
unsigned int var_16 = 3109702190U;
int zero = 0;
unsigned char var_18 = (unsigned char)84;
unsigned int var_19 = 75026770U;
long long int var_20 = 8416385129124978091LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
