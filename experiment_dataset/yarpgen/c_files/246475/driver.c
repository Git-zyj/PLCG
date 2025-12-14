#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4657224994310243063ULL;
unsigned int var_4 = 1142848924U;
unsigned long long int var_5 = 15940601327415837322ULL;
int var_9 = -130563035;
unsigned char var_14 = (unsigned char)110;
int zero = 0;
short var_19 = (short)22192;
short var_20 = (short)6663;
_Bool var_21 = (_Bool)1;
long long int var_22 = -8829614779102670196LL;
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
