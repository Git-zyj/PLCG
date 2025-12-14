#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38744;
signed char var_5 = (signed char)-47;
unsigned long long int var_9 = 17077682353344173554ULL;
signed char var_10 = (signed char)1;
_Bool var_11 = (_Bool)0;
long long int var_17 = -4670132292197405968LL;
int zero = 0;
unsigned long long int var_20 = 17874491131059385055ULL;
long long int var_21 = 8284339013022954805LL;
unsigned int var_22 = 2279065938U;
unsigned short var_23 = (unsigned short)20967;
unsigned short var_24 = (unsigned short)46078;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
