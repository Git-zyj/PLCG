#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1495252506561504921LL;
int var_2 = 1668407047;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-8477;
_Bool var_7 = (_Bool)1;
long long int var_8 = -6698986318256891893LL;
int var_11 = 821121753;
_Bool var_14 = (_Bool)1;
unsigned char var_16 = (unsigned char)57;
int zero = 0;
signed char var_18 = (signed char)-90;
unsigned short var_19 = (unsigned short)38637;
unsigned short var_20 = (unsigned short)19921;
unsigned char var_21 = (unsigned char)152;
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
