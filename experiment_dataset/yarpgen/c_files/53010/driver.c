#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2119743717;
short var_2 = (short)-8216;
unsigned int var_3 = 358415854U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 6997666882764602343ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 430026144U;
unsigned char var_14 = (unsigned char)202;
void init() {
}

void checksum() {
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
