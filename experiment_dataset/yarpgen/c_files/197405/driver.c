#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15608;
unsigned short var_6 = (unsigned short)21488;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_14 = (unsigned char)254;
int zero = 0;
unsigned int var_15 = 3759362243U;
long long int var_16 = -4943730355283622470LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
