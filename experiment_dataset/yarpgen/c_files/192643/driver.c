#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14762069314843039317ULL;
unsigned short var_5 = (unsigned short)18597;
unsigned long long int var_6 = 17318703241220491545ULL;
unsigned char var_9 = (unsigned char)253;
unsigned char var_17 = (unsigned char)208;
int zero = 0;
signed char var_20 = (signed char)45;
unsigned short var_21 = (unsigned short)42746;
unsigned char var_22 = (unsigned char)126;
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
