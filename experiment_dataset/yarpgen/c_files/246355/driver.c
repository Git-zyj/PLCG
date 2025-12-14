#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6619777009370807359LL;
long long int var_3 = -8699029242875034543LL;
long long int var_7 = 4910979217453248489LL;
_Bool var_8 = (_Bool)1;
short var_14 = (short)32676;
long long int var_15 = -6942286296531324382LL;
unsigned short var_16 = (unsigned short)55386;
int zero = 0;
unsigned short var_20 = (unsigned short)18316;
unsigned int var_21 = 397985891U;
int var_22 = -444147407;
void init() {
}

void checksum() {
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
