#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 273112649017776437ULL;
int var_4 = 1612769834;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2814197611U;
unsigned int var_8 = 4040275245U;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 3679913713U;
int zero = 0;
long long int var_14 = 8355353829058869377LL;
unsigned char var_15 = (unsigned char)169;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
