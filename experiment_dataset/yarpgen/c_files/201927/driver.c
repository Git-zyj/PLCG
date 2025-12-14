#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12615408734334656621ULL;
unsigned short var_3 = (unsigned short)18157;
unsigned long long int var_6 = 7205840058245230307ULL;
unsigned char var_9 = (unsigned char)193;
unsigned short var_10 = (unsigned short)23333;
unsigned long long int var_12 = 11420323576700747559ULL;
short var_13 = (short)-971;
unsigned long long int var_16 = 12618263376863826014ULL;
short var_17 = (short)-17522;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6824952389835475941LL;
signed char var_21 = (signed char)78;
long long int var_22 = -2788670085122470323LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
