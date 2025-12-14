#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 24650862U;
unsigned short var_1 = (unsigned short)39859;
unsigned int var_2 = 2926380229U;
unsigned short var_3 = (unsigned short)27658;
unsigned int var_4 = 2980457609U;
unsigned short var_5 = (unsigned short)23047;
unsigned int var_6 = 597296784U;
unsigned short var_7 = (unsigned short)61656;
unsigned int var_8 = 379444937U;
unsigned int var_9 = 989291198U;
unsigned int var_10 = 1530882241U;
unsigned int var_11 = 3926813486U;
unsigned short var_12 = (unsigned short)27821;
int zero = 0;
unsigned short var_13 = (unsigned short)50809;
unsigned short var_14 = (unsigned short)63685;
unsigned short var_15 = (unsigned short)63107;
unsigned short var_16 = (unsigned short)60427;
unsigned short var_17 = (unsigned short)35963;
unsigned int var_18 = 195227795U;
unsigned short var_19 = (unsigned short)58046;
unsigned short var_20 = (unsigned short)61235;
unsigned short var_21 = (unsigned short)62565;
unsigned int var_22 = 2875033207U;
unsigned int var_23 = 1692768891U;
unsigned short var_24 = (unsigned short)26424;
unsigned int var_25 = 3572975955U;
unsigned short var_26 = (unsigned short)22423;
unsigned short var_27 = (unsigned short)55522;
unsigned short var_28 = (unsigned short)29805;
unsigned int var_29 = 1844811127U;
unsigned int var_30 = 4220357229U;
unsigned short var_31 = (unsigned short)25995;
unsigned int var_32 = 3006945687U;
unsigned int var_33 = 1638550876U;
unsigned short var_34 = (unsigned short)56386;
unsigned short var_35 = (unsigned short)51734;
unsigned short var_36 = (unsigned short)389;
unsigned int var_37 = 3925430496U;
unsigned int var_38 = 3538037366U;
unsigned short var_39 = (unsigned short)19666;
unsigned int var_40 = 3793402852U;
unsigned int var_41 = 2536306500U;
unsigned short var_42 = (unsigned short)44746;
unsigned short var_43 = (unsigned short)39599;
unsigned short var_44 = (unsigned short)13412;
unsigned short arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
unsigned int arr_2 [17] ;
unsigned int arr_3 [17] [17] [17] ;
unsigned short arr_5 [17] [17] [17] ;
unsigned int arr_6 [17] [17] [17] [17] ;
unsigned short arr_9 [17] ;
unsigned int arr_10 [17] [17] [17] [17] [17] [17] ;
unsigned short arr_13 [17] ;
unsigned short arr_14 [17] [17] [17] ;
unsigned int arr_15 [17] [17] [17] ;
unsigned short arr_16 [17] [17] [17] [17] [17] [17] ;
unsigned int arr_17 [17] [17] [17] [17] [17] ;
unsigned int arr_21 [17] ;
unsigned int arr_37 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)10520;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)4325;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 3414367480U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 365011884U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)23941;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1799531030U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned short)45600;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 302447589U : 1145802940U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (unsigned short)15260;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)5011 : (unsigned short)52264;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3572121649U : 3526793141U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)58669;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 776792347U : 3370084741U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 3963358408U : 1662195265U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = 1769920444U;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
