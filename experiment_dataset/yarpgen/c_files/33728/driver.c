#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)34;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 11459975471276773815ULL;
unsigned char var_14 = (unsigned char)117;
unsigned char var_15 = (unsigned char)184;
unsigned long long int var_17 = 8923503751171938319ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1907962163;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
