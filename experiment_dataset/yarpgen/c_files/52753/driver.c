#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)162;
unsigned char var_9 = (unsigned char)106;
unsigned char var_10 = (unsigned char)144;
unsigned long long int var_11 = 11969445961346276714ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -1602513840;
unsigned char var_20 = (unsigned char)240;
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
