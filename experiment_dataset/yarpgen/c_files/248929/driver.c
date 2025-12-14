#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6323;
unsigned int var_1 = 980444688U;
long long int var_4 = -8315412490297111794LL;
unsigned short var_7 = (unsigned short)5267;
unsigned int var_8 = 4144396275U;
int var_9 = -901570322;
unsigned short var_10 = (unsigned short)19612;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 3030354115045439704LL;
long long int var_13 = -5122968890308175882LL;
unsigned char var_14 = (unsigned char)220;
void init() {
}

void checksum() {
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
