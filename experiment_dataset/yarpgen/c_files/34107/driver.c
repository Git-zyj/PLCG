#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22166;
int var_7 = -1089787415;
_Bool var_8 = (_Bool)1;
unsigned short var_15 = (unsigned short)52190;
int zero = 0;
unsigned int var_16 = 3006403576U;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3901207665U;
unsigned short var_19 = (unsigned short)37769;
unsigned char var_20 = (unsigned char)36;
unsigned long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 13422477064781792771ULL;
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
