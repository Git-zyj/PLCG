#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_6 = 7966593497693883674ULL;
unsigned char var_14 = (unsigned char)77;
long long int var_15 = 7958669646011689995LL;
unsigned char var_17 = (unsigned char)18;
int zero = 0;
int var_18 = -1484167396;
short var_19 = (short)-20502;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
