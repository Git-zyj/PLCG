#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60143;
long long int var_2 = 4814084071562907298LL;
signed char var_3 = (signed char)-18;
unsigned short var_5 = (unsigned short)34868;
unsigned long long int var_6 = 8351944079387172418ULL;
long long int var_8 = -1049454851594578596LL;
unsigned short var_9 = (unsigned short)32692;
short var_10 = (short)-11953;
unsigned long long int var_11 = 7997356475085948305ULL;
unsigned long long int var_12 = 4782138443585314430ULL;
int zero = 0;
signed char var_13 = (signed char)-122;
signed char var_14 = (signed char)-14;
long long int var_15 = -602010605447047928LL;
unsigned long long int var_16 = 6384017904768953590ULL;
int var_17 = -1975947242;
short var_18 = (short)30216;
signed char var_19 = (signed char)60;
long long int var_20 = -6768549162802963181LL;
long long int var_21 = 7755361459929561410LL;
long long int var_22 = -97105141749586942LL;
long long int var_23 = 1014744342316439841LL;
unsigned long long int var_24 = 8410302225197551986ULL;
int var_25 = -1301728802;
signed char arr_1 [17] [17] ;
long long int arr_2 [17] ;
unsigned short arr_5 [17] [17] [17] ;
signed char arr_7 [17] [17] [17] [17] ;
signed char arr_8 [17] [17] ;
unsigned char arr_9 [17] [17] ;
unsigned short arr_12 [18] ;
unsigned short arr_23 [13] [13] ;
unsigned short arr_10 [17] ;
unsigned short arr_21 [17] [17] [17] [17] ;
short arr_27 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 1485888199644552517LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)12368;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned short)7391;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = (unsigned short)34422;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned short)64755;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)1817 : (unsigned short)15760;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = (short)-26532;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
