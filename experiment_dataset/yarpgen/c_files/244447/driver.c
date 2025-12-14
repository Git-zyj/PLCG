#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1129924242U;
long long int var_3 = 1650138431727320295LL;
_Bool var_4 = (_Bool)1;
unsigned char var_6 = (unsigned char)97;
unsigned char var_12 = (unsigned char)94;
unsigned int var_13 = 401264729U;
int zero = 0;
unsigned long long int var_15 = 17054002516260852534ULL;
unsigned short var_16 = (unsigned short)46975;
void init() {
}

void checksum() {
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
