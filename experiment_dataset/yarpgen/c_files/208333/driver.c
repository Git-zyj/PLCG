#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2565857841466167001LL;
unsigned short var_2 = (unsigned short)60744;
unsigned long long int var_5 = 7337281921853661709ULL;
unsigned int var_6 = 2517352797U;
unsigned long long int var_7 = 16431986403028417782ULL;
short var_9 = (short)-14627;
unsigned int var_10 = 2363008709U;
unsigned char var_11 = (unsigned char)164;
unsigned char var_12 = (unsigned char)185;
unsigned long long int var_13 = 15894045078850398872ULL;
unsigned short var_14 = (unsigned short)17723;
short var_15 = (short)-13976;
int zero = 0;
short var_16 = (short)-20852;
unsigned short var_17 = (unsigned short)61887;
unsigned short var_18 = (unsigned short)13983;
short var_19 = (short)5177;
_Bool var_20 = (_Bool)0;
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
