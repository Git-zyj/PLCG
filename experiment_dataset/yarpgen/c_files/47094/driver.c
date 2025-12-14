#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3188953199309853525LL;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-12847;
int var_3 = -1696147886;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-10333;
int var_6 = -38515556;
int var_7 = -1506261110;
unsigned char var_8 = (unsigned char)139;
_Bool var_9 = (_Bool)1;
int var_10 = -1450695578;
_Bool var_11 = (_Bool)0;
int var_12 = 18842893;
unsigned short var_13 = (unsigned short)30477;
unsigned short var_14 = (unsigned short)34347;
unsigned short var_15 = (unsigned short)5834;
unsigned char var_16 = (unsigned char)18;
long long int var_17 = 6413166136192228531LL;
int var_18 = -1178813313;
int zero = 0;
unsigned short var_19 = (unsigned short)28476;
short var_20 = (short)14798;
long long int var_21 = -2919952778520134404LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
