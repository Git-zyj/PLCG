#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12736;
unsigned char var_1 = (unsigned char)101;
unsigned long long int var_2 = 17823926063880502078ULL;
_Bool var_3 = (_Bool)0;
int var_4 = -1339840588;
unsigned int var_5 = 1040199789U;
short var_6 = (short)-2842;
unsigned short var_8 = (unsigned short)5218;
short var_10 = (short)32603;
signed char var_11 = (signed char)122;
unsigned short var_13 = (unsigned short)39116;
signed char var_14 = (signed char)51;
int zero = 0;
unsigned long long int var_15 = 1741988009052801648ULL;
unsigned short var_16 = (unsigned short)63013;
unsigned long long int var_17 = 16947746028937338426ULL;
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
