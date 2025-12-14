#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 154842623;
unsigned char var_4 = (unsigned char)71;
unsigned int var_5 = 2239729531U;
int var_8 = -823148653;
unsigned long long int var_9 = 14095833268970352463ULL;
unsigned short var_10 = (unsigned short)9357;
int var_14 = -949834769;
int zero = 0;
unsigned int var_16 = 2767501847U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
