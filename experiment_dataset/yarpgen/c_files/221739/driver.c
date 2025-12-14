#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1407819287;
long long int var_1 = -2803491853368200057LL;
long long int var_2 = -2014306556790791746LL;
unsigned long long int var_3 = 6728273987729884909ULL;
unsigned char var_4 = (unsigned char)129;
unsigned char var_5 = (unsigned char)173;
short var_7 = (short)15101;
short var_8 = (short)3452;
short var_9 = (short)14721;
int zero = 0;
signed char var_10 = (signed char)-124;
unsigned char var_11 = (unsigned char)192;
long long int var_12 = 3789748053615853069LL;
short var_13 = (short)16863;
short var_14 = (short)15290;
long long int var_15 = -2107638547398544355LL;
int var_16 = -769631533;
long long int var_17 = 8548415948262887395LL;
signed char var_18 = (signed char)127;
signed char var_19 = (signed char)-69;
short var_20 = (short)-13605;
long long int var_21 = 6630005555317297351LL;
long long int var_22 = 4447588306719406661LL;
short var_23 = (short)19339;
unsigned long long int var_24 = 7366817444237897364ULL;
unsigned char var_25 = (unsigned char)60;
int var_26 = -243261235;
unsigned long long int arr_0 [25] ;
signed char arr_1 [25] ;
unsigned short arr_3 [12] ;
long long int arr_4 [12] ;
unsigned int arr_5 [12] [12] [12] ;
unsigned long long int arr_10 [12] [12] ;
unsigned short arr_11 [12] [12] [12] [12] ;
short arr_13 [12] [12] [12] [12] [12] [12] ;
long long int arr_18 [12] [12] [12] [12] ;
unsigned long long int arr_23 [14] [14] ;
signed char arr_15 [12] [12] [12] [12] [12] ;
long long int arr_16 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 15659625219998534026ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)18359;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -1538178995711046968LL : -8236609130273052897LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1321734898U : 1411975771U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 14119409174053202321ULL : 13524913029946722065ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)8514 : (unsigned short)56671;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)-24108 : (short)-30225;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = -8563156898906638358LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_23 [i_0] [i_1] = 4632687767392004277ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)77 : (signed char)-71;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? -6138615289801997353LL : -8152870249397863349LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
