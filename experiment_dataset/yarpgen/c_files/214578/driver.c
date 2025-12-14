#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5690776188736673698LL;
unsigned long long int var_5 = 9417935831202385636ULL;
unsigned long long int var_11 = 1431693669905706448ULL;
int var_13 = 1900844744;
unsigned short var_15 = (unsigned short)29288;
int zero = 0;
short var_19 = (short)26080;
short var_20 = (short)6230;
_Bool var_21 = (_Bool)1;
long long int var_22 = 4453744485038352889LL;
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
