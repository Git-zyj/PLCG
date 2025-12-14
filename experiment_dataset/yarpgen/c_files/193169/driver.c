#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)16;
unsigned char var_2 = (unsigned char)10;
unsigned short var_4 = (unsigned short)63638;
signed char var_5 = (signed char)-106;
unsigned char var_7 = (unsigned char)238;
unsigned long long int var_8 = 4646087592198726024ULL;
unsigned int var_9 = 1653739216U;
int zero = 0;
unsigned long long int var_11 = 15387196148497402286ULL;
unsigned int var_12 = 4135366062U;
long long int var_13 = -2718360966213673438LL;
long long int var_14 = -6168450355866984788LL;
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
