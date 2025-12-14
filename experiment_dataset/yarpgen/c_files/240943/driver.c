#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6776973134844587636ULL;
unsigned long long int var_1 = 11422851745773579761ULL;
signed char var_4 = (signed char)-112;
unsigned long long int var_5 = 6637832039058994984ULL;
unsigned long long int var_8 = 10176115857327429457ULL;
signed char var_9 = (signed char)-15;
signed char var_10 = (signed char)64;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)4;
signed char var_13 = (signed char)-25;
unsigned long long int var_14 = 6349381463297523117ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4963165454708318119ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
