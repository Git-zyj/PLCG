#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)254;
signed char var_6 = (signed char)122;
signed char var_7 = (signed char)74;
unsigned long long int var_8 = 9840649132774479524ULL;
long long int var_14 = 358582254618363582LL;
unsigned int var_16 = 2680425983U;
int zero = 0;
unsigned int var_20 = 3055463037U;
unsigned long long int var_21 = 7328318622297687062ULL;
long long int var_22 = 151203170121351531LL;
unsigned long long int var_23 = 16537694408387967058ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
