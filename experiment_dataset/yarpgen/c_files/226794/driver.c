#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3667985860U;
int var_6 = -50992631;
signed char var_9 = (signed char)-84;
unsigned char var_11 = (unsigned char)81;
unsigned long long int var_12 = 16670363408888658881ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_20 = 911435914234134277LL;
signed char var_21 = (signed char)10;
unsigned char var_22 = (unsigned char)57;
unsigned char var_23 = (unsigned char)31;
unsigned int var_24 = 1746509842U;
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
