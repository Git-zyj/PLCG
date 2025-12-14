#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4563015251012377906LL;
short var_1 = (short)22356;
short var_2 = (short)31642;
int var_3 = 260984702;
unsigned char var_6 = (unsigned char)35;
long long int var_7 = 5622687718429544882LL;
int var_8 = 308420226;
unsigned char var_9 = (unsigned char)156;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)19471;
short var_13 = (short)15967;
unsigned short var_14 = (unsigned short)55899;
unsigned short var_15 = (unsigned short)25433;
_Bool var_16 = (_Bool)1;
long long int var_17 = 7135571151458590504LL;
long long int var_18 = -3224310666961296589LL;
int var_19 = -1637922403;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)21923;
int var_22 = -92567261;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)23;
int var_25 = 1907682400;
short var_26 = (short)-16138;
unsigned short var_27 = (unsigned short)4192;
unsigned short var_28 = (unsigned short)33137;
int var_29 = -709771417;
unsigned char var_30 = (unsigned char)165;
unsigned short var_31 = (unsigned short)11181;
int var_32 = -1979851291;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)36073;
int var_35 = 1639025846;
unsigned short var_36 = (unsigned short)34927;
unsigned short var_37 = (unsigned short)14661;
long long int var_38 = -5646662164717493539LL;
short var_39 = (short)-6081;
unsigned char var_40 = (unsigned char)146;
unsigned short var_41 = (unsigned short)20967;
_Bool var_42 = (_Bool)1;
int var_43 = 610033093;
unsigned char var_44 = (unsigned char)58;
long long int var_45 = 313835353555167507LL;
int var_46 = -1728035788;
short var_47 = (short)-21466;
unsigned char var_48 = (unsigned char)51;
unsigned short var_49 = (unsigned short)26748;
short var_50 = (short)-2785;
unsigned short var_51 = (unsigned short)7741;
unsigned char var_52 = (unsigned char)104;
long long int var_53 = 8906227567043808009LL;
int var_54 = 61779678;
unsigned short var_55 = (unsigned short)60363;
unsigned short var_56 = (unsigned short)46318;
unsigned short var_57 = (unsigned short)43324;
short var_58 = (short)7150;
_Bool var_59 = (_Bool)1;
int var_60 = 1177421000;
short arr_0 [10] ;
unsigned char arr_1 [10] [10] ;
unsigned char arr_2 [10] ;
unsigned char arr_4 [10] [10] ;
short arr_5 [10] [10] ;
unsigned char arr_10 [10] [10] [10] [10] ;
unsigned char arr_12 [15] [15] ;
unsigned char arr_13 [15] [15] ;
int arr_14 [15] ;
short arr_15 [15] ;
unsigned short arr_16 [15] [15] [15] ;
unsigned short arr_17 [15] [15] ;
_Bool arr_18 [15] [15] ;
unsigned short arr_20 [15] [15] [15] [15] ;
int arr_23 [15] ;
unsigned short arr_25 [15] [15] ;
unsigned short arr_29 [15] [15] [15] ;
unsigned char arr_30 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_32 [15] [15] [15] ;
unsigned char arr_34 [15] [15] [15] [15] [15] [15] ;
long long int arr_35 [15] [15] [15] [15] [15] ;
unsigned char arr_36 [15] [15] [15] ;
unsigned short arr_41 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_42 [24] ;
int arr_43 [24] ;
_Bool arr_44 [24] [24] [24] ;
unsigned short arr_45 [24] [24] [24] ;
int arr_48 [24] ;
unsigned char arr_49 [24] [24] [24] [24] [24] ;
long long int arr_50 [24] [24] [24] [24] ;
short arr_51 [21] ;
unsigned char arr_52 [21] ;
unsigned short arr_57 [21] [21] [21] ;
int arr_58 [21] [21] [21] [21] ;
unsigned char arr_60 [21] [21] [21] [21] [21] [21] ;
short arr_61 [21] [21] [21] [21] [21] ;
long long int arr_64 [21] [21] [21] [21] [21] ;
short arr_66 [21] ;
short arr_67 [21] ;
long long int arr_68 [21] [21] [21] ;
int arr_71 [21] [21] ;
short arr_73 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_76 [21] [21] [21] [21] [21] [21] ;
int arr_82 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)14882;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)212;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (short)19836;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)81 : (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 1065865687;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (short)3934;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned short)2283;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)27921;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned short)46666;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = -1107457736;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned short)59944;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned short)3216;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned short)40419;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = 8282616273624243107LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)41252;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_42 [i_0] = (unsigned short)46706;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_43 [i_0] = -1559322165;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (unsigned short)36610;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_48 [i_0] = -1361753401;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_50 [i_0] [i_1] [i_2] [i_3] = 5280605741830131004LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_51 [i_0] = (short)11487;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_52 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)1024 : (unsigned short)12063;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1282271701 : 1883405778;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned char)107 : (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)32209;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] = -8068569564094562788LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_66 [i_0] = (short)-29574;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_67 [i_0] = (short)12856;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = 1755345241351738497LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_71 [i_0] [i_1] = (i_1 % 2 == 0) ? 449325130 : -1927222408;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_73 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (short)-6427 : (short)-27115;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_76 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)25971;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_82 [i_0] = 1296776733;
}

void checksum() {
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
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
