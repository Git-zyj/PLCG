#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16501;
signed char var_1 = (signed char)-2;
unsigned char var_2 = (unsigned char)162;
long long int var_8 = 6495394087108100356LL;
int var_10 = -2047638457;
unsigned char var_13 = (unsigned char)251;
short var_14 = (short)19729;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_18 = (short)-18059;
long long int var_19 = -3552828224054016141LL;
unsigned short var_20 = (unsigned short)11580;
void init() {
}

void checksum() {
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
