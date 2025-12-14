#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
unsigned long long int var_1 = 2053203152990850657ULL;
unsigned short var_2 = (unsigned short)19099;
long long int var_4 = -609656184685880578LL;
signed char var_5 = (signed char)-105;
unsigned short var_8 = (unsigned short)10717;
int var_10 = -621789480;
unsigned int var_11 = 2879710813U;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)117;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-24532;
long long int var_16 = 5049577086225408116LL;
unsigned short var_17 = (unsigned short)32342;
unsigned short var_18 = (unsigned short)20725;
long long int var_19 = 4427567506564062503LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
