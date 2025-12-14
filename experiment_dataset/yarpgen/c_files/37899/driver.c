#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)51;
unsigned int var_3 = 2000234178U;
long long int var_7 = 5451370965917093903LL;
unsigned int var_8 = 4044502457U;
short var_9 = (short)-5311;
long long int var_10 = -3001778969482628181LL;
unsigned char var_11 = (unsigned char)192;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
