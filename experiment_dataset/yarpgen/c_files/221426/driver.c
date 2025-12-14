#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)50;
unsigned int var_5 = 1670031267U;
short var_6 = (short)-31432;
unsigned int var_7 = 2074269573U;
unsigned int var_8 = 1389804466U;
short var_9 = (short)17399;
unsigned char var_10 = (unsigned char)176;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 3902875581479789559ULL;
void init() {
}

void checksum() {
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
