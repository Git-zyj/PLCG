#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6491946930883397279ULL;
unsigned char var_7 = (unsigned char)40;
unsigned short var_8 = (unsigned short)61090;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)35309;
int zero = 0;
unsigned int var_12 = 1796218670U;
long long int var_13 = -3268654783189106700LL;
unsigned long long int var_14 = 6044633492925814656ULL;
unsigned short var_15 = (unsigned short)6041;
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
