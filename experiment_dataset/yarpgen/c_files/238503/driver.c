#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 6274551959740818910LL;
int var_8 = -1252149002;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)26186;
unsigned int var_15 = 3142299667U;
int var_18 = 1406884898;
int zero = 0;
short var_19 = (short)-3612;
short var_20 = (short)26826;
int var_21 = 531347431;
long long int var_22 = -1653117097236807245LL;
short var_23 = (short)28127;
int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 1581712312;
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
