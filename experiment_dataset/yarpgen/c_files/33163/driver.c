#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)86;
short var_4 = (short)5333;
unsigned char var_7 = (unsigned char)108;
unsigned int var_9 = 3599720246U;
unsigned long long int var_10 = 1612781742562635581ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)6031;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 16789381865925592004ULL;
void init() {
}

void checksum() {
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
