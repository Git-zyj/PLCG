#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = 6541988832707021388LL;
signed char var_7 = (signed char)-51;
int var_10 = 1159358235;
unsigned long long int var_14 = 7406908723681155022ULL;
int zero = 0;
short var_15 = (short)15484;
unsigned short var_16 = (unsigned short)63684;
unsigned short var_17 = (unsigned short)54796;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
