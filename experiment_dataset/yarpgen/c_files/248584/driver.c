#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19887;
unsigned short var_3 = (unsigned short)3170;
long long int var_5 = 8762212220689021623LL;
_Bool var_6 = (_Bool)1;
int var_8 = -316565615;
long long int var_9 = -2674308314633294182LL;
unsigned char var_12 = (unsigned char)139;
unsigned long long int var_13 = 3582433870500191588ULL;
short var_15 = (short)15150;
unsigned int var_16 = 3212138990U;
int zero = 0;
short var_17 = (short)-30997;
int var_18 = -1768501794;
short var_19 = (short)-14549;
short arr_3 [21] ;
unsigned short arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)-1833;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)46804;
}

void checksum() {
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
