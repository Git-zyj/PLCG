#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)128;
unsigned short var_2 = (unsigned short)43149;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)384;
short var_7 = (short)6316;
unsigned short var_8 = (unsigned short)40141;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
long long int var_17 = -216989539941449370LL;
int zero = 0;
long long int var_19 = 5706018290191436617LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = -3836952146109715226LL;
unsigned char var_22 = (unsigned char)86;
unsigned int var_23 = 2154022528U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
