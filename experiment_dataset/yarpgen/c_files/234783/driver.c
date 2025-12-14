#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)169;
unsigned long long int var_3 = 14477141719358319437ULL;
unsigned char var_4 = (unsigned char)190;
signed char var_5 = (signed char)45;
signed char var_9 = (signed char)-25;
unsigned char var_11 = (unsigned char)215;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)83;
unsigned long long int var_15 = 16392089477930168980ULL;
int var_16 = 596895549;
void init() {
}

void checksum() {
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
