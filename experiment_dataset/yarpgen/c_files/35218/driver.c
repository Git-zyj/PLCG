#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2721302707U;
signed char var_1 = (signed char)89;
int var_2 = -1735755937;
short var_3 = (short)-8434;
unsigned int var_5 = 2673688862U;
int var_6 = -1175639853;
unsigned char var_7 = (unsigned char)26;
unsigned short var_8 = (unsigned short)9540;
int var_10 = -1474969500;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)121;
long long int var_17 = 8860530745342526645LL;
unsigned int var_18 = 1714890737U;
int zero = 0;
unsigned short var_19 = (unsigned short)33509;
unsigned short var_20 = (unsigned short)63654;
unsigned int var_21 = 2931017355U;
unsigned int var_22 = 3041910387U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
