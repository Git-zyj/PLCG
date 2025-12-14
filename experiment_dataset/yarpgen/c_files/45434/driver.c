#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -231708395;
long long int var_3 = -8314207138166253305LL;
signed char var_4 = (signed char)127;
short var_6 = (short)-2929;
unsigned long long int var_7 = 5181997430800468793ULL;
signed char var_8 = (signed char)-81;
unsigned char var_9 = (unsigned char)106;
int zero = 0;
unsigned long long int var_10 = 2923455537532219951ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
