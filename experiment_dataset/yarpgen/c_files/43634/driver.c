#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
long long int var_2 = -768357853986510978LL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)2345;
unsigned short var_8 = (unsigned short)34012;
short var_9 = (short)20579;
signed char var_10 = (signed char)-123;
int var_11 = 226896011;
int zero = 0;
signed char var_12 = (signed char)-65;
unsigned char var_13 = (unsigned char)250;
long long int var_14 = 3003689806966710420LL;
short var_15 = (short)26947;
void init() {
}

void checksum() {
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
