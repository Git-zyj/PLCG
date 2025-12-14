#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1963041024U;
long long int var_1 = -6337015113324267464LL;
unsigned short var_2 = (unsigned short)63084;
unsigned char var_4 = (unsigned char)68;
unsigned char var_5 = (unsigned char)195;
signed char var_6 = (signed char)65;
short var_7 = (short)-9539;
short var_8 = (short)31385;
short var_10 = (short)7967;
long long int var_11 = -4758035585335720703LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 2494684418U;
unsigned short var_17 = (unsigned short)2891;
signed char var_18 = (signed char)30;
short var_19 = (short)-15300;
unsigned int var_20 = 2372069913U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
