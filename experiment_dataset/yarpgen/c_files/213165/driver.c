#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4068694326U;
int var_3 = 1020476309;
_Bool var_4 = (_Bool)1;
int var_5 = 1218812887;
unsigned char var_10 = (unsigned char)87;
int zero = 0;
signed char var_13 = (signed char)-69;
signed char var_14 = (signed char)111;
void init() {
}

void checksum() {
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
