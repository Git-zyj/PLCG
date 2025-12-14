#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
unsigned short var_4 = (unsigned short)44846;
unsigned long long int var_8 = 1782460698991865153ULL;
short var_14 = (short)31568;
int zero = 0;
unsigned long long int var_15 = 5988162354672008400ULL;
long long int var_16 = 2985764295846090629LL;
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
