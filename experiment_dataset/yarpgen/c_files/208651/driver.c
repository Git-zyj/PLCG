#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5362563630354611208LL;
long long int var_6 = 6756240840485131260LL;
int var_7 = 1430367844;
short var_10 = (short)-16827;
unsigned char var_11 = (unsigned char)194;
_Bool var_12 = (_Bool)1;
long long int var_14 = 1145274901502022129LL;
signed char var_17 = (signed char)-69;
int zero = 0;
unsigned char var_18 = (unsigned char)239;
int var_19 = -120211163;
unsigned char var_20 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
