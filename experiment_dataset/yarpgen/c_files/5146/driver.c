#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -175302564;
unsigned long long int var_13 = 11552934398651045974ULL;
signed char var_15 = (signed char)86;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 1573064768U;
unsigned short var_20 = (unsigned short)40342;
signed char var_21 = (signed char)-35;
unsigned char var_22 = (unsigned char)60;
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
