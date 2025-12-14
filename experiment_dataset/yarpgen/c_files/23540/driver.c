#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)124;
int var_2 = 1096087425;
signed char var_3 = (signed char)-82;
_Bool var_4 = (_Bool)1;
int var_5 = -1323393304;
unsigned int var_6 = 3336570634U;
_Bool var_8 = (_Bool)1;
int var_9 = -2104890407;
int zero = 0;
unsigned int var_11 = 3692272740U;
unsigned char var_12 = (unsigned char)6;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
