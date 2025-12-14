#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
long long int var_2 = 4757376355174750451LL;
unsigned char var_3 = (unsigned char)229;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)26;
int zero = 0;
unsigned long long int var_10 = 1125140836934971482ULL;
unsigned long long int var_11 = 18429939191582874502ULL;
short var_12 = (short)4932;
unsigned char var_13 = (unsigned char)80;
unsigned char var_14 = (unsigned char)81;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
