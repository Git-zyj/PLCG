#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -494294711;
long long int var_8 = -619252266514863080LL;
long long int var_13 = -2837512808628760181LL;
int var_14 = -1718885838;
int var_16 = -2100681827;
short var_18 = (short)-4420;
int zero = 0;
short var_20 = (short)-15315;
int var_21 = 467081688;
unsigned long long int var_22 = 11917547352122952674ULL;
short var_23 = (short)-20699;
int var_24 = -803731162;
long long int var_25 = -1479808581211883879LL;
long long int var_26 = -8899545911772350249LL;
long long int var_27 = -6613306496267501706LL;
long long int var_28 = -1407329562267555804LL;
long long int var_29 = -2273605501010911962LL;
unsigned long long int var_30 = 9535049151921910526ULL;
long long int arr_7 [11] [11] [11] ;
short arr_13 [11] [11] ;
short arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8816316138155258284LL : 1767159700815574843LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)21249 : (short)-9041;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)25461;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
