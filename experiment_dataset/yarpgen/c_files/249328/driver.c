#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = -50637219;
unsigned long long int var_7 = 14147931016140849708ULL;
unsigned int var_8 = 1561254888U;
unsigned char var_14 = (unsigned char)47;
signed char var_16 = (signed char)-33;
int zero = 0;
short var_17 = (short)-29016;
unsigned short var_18 = (unsigned short)45764;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3481541831U;
short var_21 = (short)22184;
unsigned int var_22 = 2862435042U;
unsigned char var_23 = (unsigned char)98;
signed char var_24 = (signed char)-43;
unsigned short var_25 = (unsigned short)4863;
unsigned int var_26 = 1657227635U;
signed char var_27 = (signed char)59;
long long int var_28 = -5819254423560794414LL;
short var_29 = (short)21554;
signed char var_30 = (signed char)-15;
signed char var_31 = (signed char)-49;
unsigned char var_32 = (unsigned char)217;
long long int var_33 = -6413910543856285784LL;
long long int var_34 = -8248650512072236631LL;
_Bool var_35 = (_Bool)0;
unsigned long long int var_36 = 7417925392079599845ULL;
signed char var_37 = (signed char)-29;
short arr_2 [25] ;
int arr_3 [25] [25] ;
signed char arr_7 [25] [25] [25] [25] ;
unsigned short arr_9 [25] ;
signed char arr_11 [25] [25] [25] [25] [25] ;
unsigned short arr_14 [25] [25] [25] ;
int arr_19 [25] [25] ;
signed char arr_21 [25] [25] ;
short arr_17 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)3629;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -2072232362;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (unsigned short)65014;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-85 : (signed char)-78;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)7574;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? 1479726080 : -549570156;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-17601 : (short)11931;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
