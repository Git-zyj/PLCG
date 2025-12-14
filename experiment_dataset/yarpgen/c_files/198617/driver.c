#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11860160336482163383ULL;
unsigned char var_2 = (unsigned char)69;
unsigned short var_3 = (unsigned short)13721;
short var_4 = (short)-22106;
int var_5 = 1628914878;
int var_6 = -678583398;
unsigned char var_7 = (unsigned char)233;
unsigned long long int var_9 = 7457388800474039291ULL;
unsigned int var_10 = 3457291137U;
int zero = 0;
unsigned int var_12 = 1009623486U;
unsigned char var_13 = (unsigned char)238;
unsigned int var_14 = 3775053811U;
int var_15 = 2047339403;
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
