#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-110;
_Bool var_5 = (_Bool)1;
long long int var_6 = -6678144675986374822LL;
unsigned long long int var_9 = 2108093585394866832ULL;
short var_10 = (short)23829;
int var_12 = -595721687;
signed char var_16 = (signed char)36;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3837594268U;
unsigned int var_20 = 3090829745U;
unsigned short var_21 = (unsigned short)53131;
unsigned long long int var_22 = 10197454667772728131ULL;
unsigned int var_23 = 855172045U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
