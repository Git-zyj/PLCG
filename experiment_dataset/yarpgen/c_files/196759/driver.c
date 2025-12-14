#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)127;
_Bool var_3 = (_Bool)0;
long long int var_4 = 9001382815819100382LL;
long long int var_10 = -3005339999204915833LL;
int zero = 0;
signed char var_11 = (signed char)-79;
unsigned char var_12 = (unsigned char)167;
short var_13 = (short)-3364;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
