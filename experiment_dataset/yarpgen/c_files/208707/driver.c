#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)6;
unsigned char var_4 = (unsigned char)43;
unsigned char var_7 = (unsigned char)182;
unsigned char var_11 = (unsigned char)211;
unsigned long long int var_12 = 16379282266020325869ULL;
unsigned char var_14 = (unsigned char)129;
long long int var_15 = -2713870116450071933LL;
signed char var_18 = (signed char)22;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-113;
unsigned char var_21 = (unsigned char)214;
unsigned char var_22 = (unsigned char)119;
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
