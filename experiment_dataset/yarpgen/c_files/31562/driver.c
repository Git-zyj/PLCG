#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7736226874861015829ULL;
unsigned long long int var_3 = 11971216315352317840ULL;
int var_5 = -651787841;
signed char var_9 = (signed char)-14;
unsigned int var_12 = 1236050985U;
long long int var_14 = -8966160948371552248LL;
unsigned int var_15 = 1034301535U;
unsigned char var_16 = (unsigned char)11;
int zero = 0;
unsigned char var_18 = (unsigned char)242;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)32;
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
