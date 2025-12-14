#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
int var_7 = 1351861815;
unsigned long long int var_8 = 11962291462336364936ULL;
unsigned char var_10 = (unsigned char)107;
signed char var_11 = (signed char)-42;
signed char var_12 = (signed char)121;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = 2137424727281686166LL;
short var_16 = (short)26955;
int var_17 = -198197540;
unsigned char var_18 = (unsigned char)14;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
