#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4286704305U;
unsigned long long int var_2 = 3133421092711316317ULL;
unsigned char var_3 = (unsigned char)139;
unsigned long long int var_6 = 9165347654857420306ULL;
unsigned long long int var_7 = 4598270546329705470ULL;
unsigned char var_8 = (unsigned char)178;
_Bool var_10 = (_Bool)0;
unsigned short var_12 = (unsigned short)43978;
int var_13 = 999069897;
int zero = 0;
short var_14 = (short)26365;
int var_15 = -1958744715;
void init() {
}

void checksum() {
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
