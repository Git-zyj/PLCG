#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1155588281;
unsigned short var_10 = (unsigned short)35474;
_Bool var_12 = (_Bool)1;
long long int var_14 = -5163930577531415870LL;
unsigned short var_15 = (unsigned short)37435;
int zero = 0;
short var_18 = (short)-16000;
unsigned short var_19 = (unsigned short)9185;
int var_20 = 1250168759;
long long int var_21 = -5582771764491132742LL;
unsigned char var_22 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
