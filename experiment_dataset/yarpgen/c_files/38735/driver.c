#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3619783020U;
unsigned int var_2 = 2738477375U;
unsigned int var_3 = 3814748365U;
unsigned int var_5 = 1708121616U;
long long int var_6 = 6695277801664687869LL;
_Bool var_8 = (_Bool)0;
long long int var_11 = -951616538755115404LL;
int zero = 0;
unsigned long long int var_12 = 6762478633534135747ULL;
unsigned char var_13 = (unsigned char)41;
signed char var_14 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
