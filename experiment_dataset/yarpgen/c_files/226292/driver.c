#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11516;
signed char var_1 = (signed char)-66;
long long int var_2 = -830452767220622488LL;
long long int var_3 = 4167428341633953436LL;
int var_4 = -637540470;
unsigned char var_5 = (unsigned char)63;
unsigned int var_6 = 3775005269U;
unsigned char var_7 = (unsigned char)126;
long long int var_8 = 319266761308688158LL;
unsigned short var_9 = (unsigned short)6186;
unsigned char var_10 = (unsigned char)35;
short var_11 = (short)-30744;
int zero = 0;
unsigned short var_12 = (unsigned short)9033;
signed char var_13 = (signed char)-80;
signed char var_14 = (signed char)45;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 14084306221606494668ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
