#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44583;
unsigned char var_4 = (unsigned char)168;
_Bool var_7 = (_Bool)1;
long long int var_8 = -4117667786362623420LL;
int zero = 0;
short var_10 = (short)14568;
_Bool var_11 = (_Bool)0;
int var_12 = -1608849995;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
