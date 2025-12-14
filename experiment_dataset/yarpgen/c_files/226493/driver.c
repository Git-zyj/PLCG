#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)199;
long long int var_1 = 6039616818902621143LL;
short var_2 = (short)-30172;
int var_4 = 1975506209;
long long int var_6 = 6856377064564808318LL;
unsigned int var_7 = 3343666849U;
unsigned char var_8 = (unsigned char)109;
int zero = 0;
int var_11 = -1494858021;
int var_12 = 545955232;
unsigned short var_13 = (unsigned short)53836;
int var_14 = -1185333828;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
