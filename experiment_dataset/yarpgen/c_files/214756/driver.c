#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -889509380;
long long int var_4 = 5178816731410592077LL;
short var_5 = (short)8569;
unsigned int var_10 = 4010621872U;
int var_16 = 2046817088;
short var_17 = (short)21900;
int zero = 0;
unsigned int var_18 = 4217654624U;
int var_19 = -646681985;
unsigned char var_20 = (unsigned char)119;
signed char var_21 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
