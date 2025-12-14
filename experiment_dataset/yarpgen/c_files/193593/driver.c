#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)167;
signed char var_3 = (signed char)-39;
unsigned char var_4 = (unsigned char)114;
signed char var_7 = (signed char)33;
unsigned long long int var_9 = 6095100582027339451ULL;
long long int var_10 = 6632824158051768634LL;
int zero = 0;
signed char var_12 = (signed char)-92;
unsigned int var_13 = 3168141212U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
