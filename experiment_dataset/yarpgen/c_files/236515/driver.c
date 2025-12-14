#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)30;
long long int var_8 = -2074684348338299355LL;
unsigned short var_13 = (unsigned short)31974;
_Bool var_14 = (_Bool)1;
unsigned long long int var_18 = 17595783087035617033ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)205;
int var_21 = -550267559;
void init() {
}

void checksum() {
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
