#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 3977879612U;
unsigned short var_14 = (unsigned short)48689;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 4139598702755888612LL;
signed char var_22 = (signed char)-83;
unsigned char var_23 = (unsigned char)36;
int var_24 = -2080104454;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
