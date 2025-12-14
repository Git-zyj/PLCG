#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)35;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 2076256766U;
unsigned short var_10 = (unsigned short)8112;
int zero = 0;
short var_12 = (short)8694;
long long int var_13 = -5755721576618197378LL;
long long int var_14 = 7262538853490561751LL;
signed char var_15 = (signed char)-15;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
