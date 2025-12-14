#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)72;
short var_2 = (short)-30809;
_Bool var_4 = (_Bool)1;
int var_6 = -390766504;
unsigned int var_7 = 2135931454U;
unsigned char var_9 = (unsigned char)106;
int zero = 0;
int var_10 = 1893567658;
_Bool var_11 = (_Bool)1;
short var_12 = (short)9705;
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
