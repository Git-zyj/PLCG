#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)213;
_Bool var_2 = (_Bool)1;
long long int var_3 = -5719745366674789960LL;
long long int var_5 = -7300525458837156799LL;
int var_11 = -2024667924;
long long int var_12 = -6958225932315870416LL;
int zero = 0;
int var_15 = -1253517697;
unsigned char var_16 = (unsigned char)188;
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
