#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6815085217675149974LL;
unsigned short var_5 = (unsigned short)46929;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)93;
signed char var_13 = (signed char)104;
unsigned int var_18 = 4129427464U;
int zero = 0;
unsigned int var_19 = 2516716047U;
signed char var_20 = (signed char)-16;
signed char var_21 = (signed char)72;
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
