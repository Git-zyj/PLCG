#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 18118677288235570334ULL;
signed char var_6 = (signed char)49;
unsigned short var_8 = (unsigned short)58835;
int var_9 = 889304132;
unsigned long long int var_10 = 2596531376621548440ULL;
int zero = 0;
unsigned long long int var_11 = 10828989533526365649ULL;
signed char var_12 = (signed char)0;
int var_13 = 667256496;
unsigned long long int var_14 = 12951951732105785508ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
