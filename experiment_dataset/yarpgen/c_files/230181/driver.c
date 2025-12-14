#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14051438359975382302ULL;
unsigned char var_4 = (unsigned char)213;
short var_6 = (short)9423;
short var_7 = (short)-19829;
unsigned char var_9 = (unsigned char)190;
unsigned long long int var_10 = 10897037133978530548ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)86;
short var_12 = (short)16615;
unsigned long long int var_13 = 10435558317829110272ULL;
short var_14 = (short)26850;
short var_15 = (short)14738;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
