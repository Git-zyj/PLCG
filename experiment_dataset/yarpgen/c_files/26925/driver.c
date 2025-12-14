#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3905971770U;
signed char var_7 = (signed char)-85;
unsigned int var_8 = 3462694311U;
unsigned char var_9 = (unsigned char)48;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)6909;
int zero = 0;
unsigned char var_14 = (unsigned char)146;
signed char var_15 = (signed char)27;
void init() {
}

void checksum() {
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
