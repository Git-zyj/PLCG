#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
short var_1 = (short)5399;
unsigned long long int var_2 = 4266107141229030131ULL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)9904;
signed char var_7 = (signed char)97;
unsigned char var_13 = (unsigned char)157;
long long int var_15 = -3799081029401906888LL;
int var_16 = -1535694958;
unsigned int var_17 = 891136719U;
unsigned short var_18 = (unsigned short)54520;
int zero = 0;
unsigned long long int var_20 = 7614052576139492796ULL;
signed char var_21 = (signed char)-24;
long long int var_22 = 7937049615535068460LL;
void init() {
}

void checksum() {
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
