#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
unsigned char var_2 = (unsigned char)234;
signed char var_4 = (signed char)80;
long long int var_5 = -1138140967307998701LL;
unsigned short var_6 = (unsigned short)29361;
unsigned int var_8 = 61660853U;
unsigned int var_9 = 1052858245U;
long long int var_10 = 7618265869251056085LL;
unsigned int var_11 = 638280777U;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)93;
unsigned long long int var_14 = 2440286562476284871ULL;
unsigned int var_15 = 1597536929U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
