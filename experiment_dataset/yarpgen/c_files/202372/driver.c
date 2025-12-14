#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 808303953U;
unsigned char var_1 = (unsigned char)158;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 4063041682U;
int var_4 = -985032204;
long long int var_6 = -8987637185933424172LL;
long long int var_7 = -2630963470747251270LL;
long long int var_10 = -215355773631342395LL;
int var_11 = -1564183449;
unsigned int var_12 = 1450886090U;
long long int var_13 = -3679299596362395884LL;
unsigned char var_14 = (unsigned char)88;
long long int var_15 = -4167416505893438808LL;
long long int var_16 = 1988784419474865517LL;
unsigned int var_17 = 674013900U;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_19 = (short)-10140;
short var_20 = (short)11416;
int var_21 = 135461842;
unsigned int var_22 = 3076808259U;
long long int var_23 = 1019157912031523053LL;
short var_24 = (short)-30586;
short var_25 = (short)-22921;
short var_26 = (short)1638;
unsigned char var_27 = (unsigned char)189;
int var_28 = 130961120;
unsigned int var_29 = 3600716247U;
unsigned char var_30 = (unsigned char)247;
unsigned char var_31 = (unsigned char)182;
unsigned char var_32 = (unsigned char)16;
long long int var_33 = 612854692665577117LL;
unsigned int var_34 = 2324356459U;
short var_35 = (short)11027;
unsigned int var_36 = 1727429821U;
long long int var_37 = -874135432594674104LL;
unsigned int var_38 = 1228619726U;
unsigned int var_39 = 614780424U;
unsigned int var_40 = 432229164U;
_Bool arr_1 [21] ;
int arr_2 [21] [21] [21] ;
unsigned int arr_5 [21] [21] [21] ;
long long int arr_6 [21] [21] [21] [21] [21] ;
unsigned int arr_7 [21] [21] [21] ;
unsigned int arr_14 [25] [25] ;
short arr_15 [25] [25] ;
unsigned long long int arr_16 [25] [25] ;
unsigned char arr_17 [25] [25] [25] ;
unsigned int arr_19 [25] [25] [25] [25] ;
_Bool arr_35 [25] ;
int arr_36 [17] ;
unsigned char arr_24 [16] ;
unsigned int arr_25 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 684575580;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3952898204U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_6 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -376205542072885220LL : 5235436362843108778LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1573760679U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 3324184339U : 1664803441U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-10934 : (short)-26698;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? 17228543889400597908ULL : 12480623457841511549ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 3020865696U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_36 [i_0] = -1855023071;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (unsigned char)79 : (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? 2474065292U : 1827901978U;
}

void checksum() {
    hash(&seed, var_19);
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
