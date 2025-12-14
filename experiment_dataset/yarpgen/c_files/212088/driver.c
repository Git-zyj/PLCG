#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)202;
unsigned char var_5 = (unsigned char)90;
signed char var_8 = (signed char)-65;
int var_11 = -1644648388;
long long int var_13 = -2060717723336749037LL;
int zero = 0;
long long int var_14 = 8586581809118975334LL;
short var_15 = (short)-13227;
signed char var_16 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
