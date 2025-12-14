#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11358606799589989471ULL;
unsigned long long int var_13 = 14947777614668322924ULL;
long long int var_18 = 5436613445651150868LL;
int zero = 0;
unsigned char var_19 = (unsigned char)243;
unsigned short var_20 = (unsigned short)59906;
unsigned char var_21 = (unsigned char)81;
unsigned short var_22 = (unsigned short)1504;
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
