#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55942;
long long int var_3 = -7785157406714262058LL;
unsigned char var_8 = (unsigned char)34;
short var_9 = (short)22776;
unsigned short var_11 = (unsigned short)37064;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_16 = 5124717506852081989LL;
unsigned short var_17 = (unsigned short)52029;
short var_18 = (short)-13524;
unsigned long long int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 6205472406887504151ULL : 14137695953634585624ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
