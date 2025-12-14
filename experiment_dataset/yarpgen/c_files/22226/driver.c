#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1224433079U;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)56;
unsigned int var_5 = 4191443629U;
unsigned char var_6 = (unsigned char)220;
unsigned char var_8 = (unsigned char)60;
unsigned char var_9 = (unsigned char)134;
signed char var_10 = (signed char)48;
int var_11 = 1563266848;
_Bool var_12 = (_Bool)0;
int var_14 = 398702964;
unsigned int var_15 = 810857707U;
unsigned int var_16 = 3344452267U;
unsigned int var_17 = 1760176481U;
int zero = 0;
unsigned int var_18 = 2041369428U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)23;
int var_21 = 1111753140;
unsigned char var_22 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
