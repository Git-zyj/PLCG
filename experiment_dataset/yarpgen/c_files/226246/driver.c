#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 622967712;
int var_4 = 118964085;
signed char var_9 = (signed char)111;
long long int var_11 = 8430861214712030258LL;
int var_14 = -164597627;
long long int var_15 = 2015126286698129073LL;
int var_16 = -953367674;
int zero = 0;
int var_18 = 2132849375;
long long int var_19 = 2686440411685693319LL;
unsigned char var_20 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
