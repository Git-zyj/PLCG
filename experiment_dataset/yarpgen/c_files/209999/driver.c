#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)34;
unsigned int var_3 = 4029553699U;
int var_4 = 1823071988;
unsigned int var_7 = 3450636403U;
unsigned long long int var_9 = 6486169909083987608ULL;
long long int var_10 = 8417992627280740708LL;
unsigned char var_13 = (unsigned char)155;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 3079741653U;
unsigned char var_19 = (unsigned char)244;
unsigned int var_20 = 3661951154U;
int var_21 = 1633053312;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
