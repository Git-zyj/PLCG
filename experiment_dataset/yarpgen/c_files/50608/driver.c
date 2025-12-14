#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_4 = -6525027380323867213LL;
signed char var_5 = (signed char)-127;
unsigned long long int var_7 = 9181001857056239441ULL;
unsigned int var_8 = 192168314U;
int zero = 0;
int var_11 = 1478841649;
unsigned short var_12 = (unsigned short)8812;
int var_13 = -1782430009;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
