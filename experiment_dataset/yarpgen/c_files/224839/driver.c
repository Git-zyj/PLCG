#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)3;
long long int var_2 = 4162651645791771441LL;
unsigned long long int var_7 = 17447076057763939153ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 12075351729897310078ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_17 = (unsigned short)28879;
int zero = 0;
unsigned int var_18 = 270160374U;
int var_19 = -406221526;
short var_20 = (short)28248;
int var_21 = 315794442;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
