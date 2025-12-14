#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4280260118U;
unsigned short var_2 = (unsigned short)55722;
short var_8 = (short)23319;
unsigned int var_10 = 3915073081U;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_16 = (short)-1195;
unsigned long long int var_17 = 16046811234369425427ULL;
unsigned char var_18 = (unsigned char)65;
short var_19 = (short)14221;
long long int var_20 = -9009207591722693548LL;
short arr_4 [20] ;
unsigned int arr_6 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)-22901;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1027967350U;
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
