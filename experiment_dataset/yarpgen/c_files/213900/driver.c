#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)4;
int var_6 = 634815872;
int var_8 = 1380871801;
int var_14 = 1142689085;
unsigned char var_16 = (unsigned char)38;
unsigned long long int var_18 = 2827244688316892679ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1036032086U;
int var_21 = 1593120199;
long long int var_22 = 2761379573393646363LL;
unsigned int var_23 = 3064280365U;
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
