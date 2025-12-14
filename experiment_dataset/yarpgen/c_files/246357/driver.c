#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4041;
short var_3 = (short)8937;
long long int var_4 = -7137801406803441280LL;
int var_9 = -185430428;
long long int var_10 = -6122479571976927695LL;
unsigned short var_11 = (unsigned short)53881;
int zero = 0;
unsigned char var_12 = (unsigned char)16;
unsigned char var_13 = (unsigned char)219;
_Bool var_14 = (_Bool)1;
int var_15 = -266080194;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
