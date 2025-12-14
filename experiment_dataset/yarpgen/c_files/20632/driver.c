#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1612692665U;
unsigned int var_6 = 3431225356U;
int var_10 = 1085722877;
unsigned char var_17 = (unsigned char)12;
int zero = 0;
unsigned char var_19 = (unsigned char)60;
signed char var_20 = (signed char)-39;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 6990634547244819742ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
