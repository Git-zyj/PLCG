#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -309937120;
unsigned short var_3 = (unsigned short)38658;
long long int var_8 = 1455673471679711702LL;
unsigned char var_10 = (unsigned char)141;
unsigned char var_12 = (unsigned char)114;
int zero = 0;
unsigned char var_13 = (unsigned char)210;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
