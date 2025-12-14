#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
unsigned short var_3 = (unsigned short)58892;
unsigned int var_8 = 3895871030U;
long long int var_9 = -3837765801304547234LL;
signed char var_10 = (signed char)68;
int zero = 0;
signed char var_12 = (signed char)-77;
unsigned short var_13 = (unsigned short)30534;
int var_14 = -175296080;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
