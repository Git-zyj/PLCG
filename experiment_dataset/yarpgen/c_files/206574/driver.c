#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1369730390570930632LL;
unsigned short var_3 = (unsigned short)57988;
unsigned int var_7 = 3959816154U;
unsigned short var_16 = (unsigned short)30420;
unsigned int var_18 = 4264781900U;
int zero = 0;
unsigned long long int var_20 = 1206845226966839405ULL;
int var_21 = 23245010;
unsigned char var_22 = (unsigned char)222;
unsigned char var_23 = (unsigned char)73;
signed char var_24 = (signed char)120;
unsigned long long int var_25 = 50470094147850788ULL;
unsigned long long int var_26 = 17691573805268663964ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
