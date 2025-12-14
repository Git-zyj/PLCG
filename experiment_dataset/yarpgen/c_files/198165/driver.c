#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 868340909;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 840175927U;
signed char var_4 = (signed char)119;
unsigned long long int var_5 = 7212764520902434553ULL;
unsigned char var_6 = (unsigned char)43;
unsigned short var_7 = (unsigned short)31534;
int var_8 = -176065381;
unsigned long long int var_10 = 2975363534054015275ULL;
unsigned long long int var_11 = 165296892376564603ULL;
short var_13 = (short)1694;
int zero = 0;
int var_14 = 1434132668;
int var_15 = -1504248205;
unsigned short var_16 = (unsigned short)10655;
signed char var_17 = (signed char)110;
unsigned short var_18 = (unsigned short)17444;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
