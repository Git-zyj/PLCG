#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)220;
unsigned char var_2 = (unsigned char)201;
unsigned long long int var_3 = 16471043234351246628ULL;
unsigned char var_4 = (unsigned char)123;
unsigned int var_6 = 1640405817U;
unsigned int var_8 = 3617726662U;
unsigned char var_12 = (unsigned char)43;
int zero = 0;
unsigned long long int var_13 = 17217571894752200370ULL;
unsigned long long int var_14 = 16351630418063720022ULL;
unsigned char var_15 = (unsigned char)147;
unsigned char var_16 = (unsigned char)34;
unsigned long long int var_17 = 5320190856876483286ULL;
unsigned long long int var_18 = 489724035430960104ULL;
unsigned char var_19 = (unsigned char)15;
unsigned char var_20 = (unsigned char)184;
unsigned char var_21 = (unsigned char)237;
unsigned char var_22 = (unsigned char)233;
unsigned int var_23 = 1662839731U;
unsigned long long int var_24 = 17169585382430754508ULL;
unsigned char var_25 = (unsigned char)104;
unsigned long long int var_26 = 16035061621100777354ULL;
unsigned int var_27 = 861507156U;
unsigned int var_28 = 2579410362U;
unsigned long long int var_29 = 14761506130453278289ULL;
unsigned char var_30 = (unsigned char)49;
unsigned long long int var_31 = 10548171784846244080ULL;
unsigned long long int var_32 = 2703366972754108806ULL;
unsigned char arr_0 [20] ;
unsigned long long int arr_1 [20] ;
unsigned char arr_5 [20] [20] ;
unsigned int arr_6 [20] [20] [20] [20] ;
unsigned char arr_9 [20] [20] [20] ;
unsigned int arr_10 [20] ;
unsigned int arr_13 [20] [20] [20] [20] [20] ;
unsigned char arr_18 [17] ;
unsigned char arr_21 [17] ;
unsigned int arr_23 [17] [17] [17] ;
unsigned char arr_25 [17] [17] ;
unsigned long long int arr_27 [17] ;
unsigned long long int arr_28 [17] [17] ;
unsigned int arr_29 [17] [17] ;
unsigned char arr_30 [17] [17] [17] ;
unsigned char arr_15 [20] ;
unsigned char arr_16 [20] ;
unsigned int arr_17 [20] ;
unsigned char arr_26 [17] [17] [17] ;
unsigned long long int arr_33 [17] [17] [17] ;
unsigned char arr_34 [17] ;
unsigned char arr_35 [17] ;
unsigned int arr_38 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)219 : (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 10450330719297190473ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3223782839U : 3305235457U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 1728212703U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 2956623941U : 3674647303U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 992783878U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)84 : (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_27 [i_0] = 4740183705449615848ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_28 [i_0] [i_1] = 13972635659548441908ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_29 [i_0] [i_1] = 27031623U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned char)102 : (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 44434171U : 2716591957U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)136 : (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 3438060460756726907ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_34 [i_0] = (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_35 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? 1545590566U : 186900314U;
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
