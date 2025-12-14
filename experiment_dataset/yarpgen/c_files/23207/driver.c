#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 464990702738979793LL;
signed char var_1 = (signed char)88;
unsigned long long int var_2 = 12832430577593757706ULL;
unsigned long long int var_3 = 5486365505908337108ULL;
unsigned int var_4 = 2484483309U;
unsigned short var_5 = (unsigned short)58245;
unsigned long long int var_6 = 10417045113432162199ULL;
unsigned long long int var_7 = 17485394253187884442ULL;
long long int var_8 = 7463263876515748822LL;
long long int var_9 = 3022327096267728472LL;
unsigned char var_10 = (unsigned char)176;
long long int var_11 = -3329665101172407836LL;
unsigned long long int var_12 = 7569565600905388822ULL;
unsigned char var_13 = (unsigned char)248;
unsigned long long int var_14 = 13865883754387082062ULL;
unsigned int var_15 = 1796602344U;
int var_16 = 1992854466;
unsigned long long int var_17 = 1902136035717681497ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)2697;
unsigned short var_19 = (unsigned short)16355;
unsigned long long int var_20 = 9014491096723426554ULL;
signed char var_21 = (signed char)-121;
unsigned int var_22 = 2129535700U;
unsigned long long int var_23 = 3537813219100697899ULL;
unsigned short var_24 = (unsigned short)27588;
unsigned int var_25 = 1905736469U;
unsigned char var_26 = (unsigned char)60;
signed char var_27 = (signed char)-97;
short var_28 = (short)20123;
unsigned long long int var_29 = 12588393300769368853ULL;
_Bool var_30 = (_Bool)1;
int var_31 = -198179825;
_Bool var_32 = (_Bool)0;
signed char var_33 = (signed char)14;
_Bool var_34 = (_Bool)1;
int var_35 = 328793997;
_Bool var_36 = (_Bool)0;
unsigned short var_37 = (unsigned short)62564;
long long int var_38 = 2633056719972358971LL;
signed char var_39 = (signed char)-67;
unsigned int var_40 = 1341865274U;
short var_41 = (short)27618;
short var_42 = (short)14328;
unsigned int var_43 = 3674797959U;
int var_44 = -1355949714;
unsigned short var_45 = (unsigned short)18258;
unsigned int var_46 = 3778742749U;
short var_47 = (short)24771;
unsigned long long int var_48 = 622718072234192140ULL;
long long int arr_0 [23] ;
unsigned short arr_1 [23] [23] ;
_Bool arr_5 [13] ;
unsigned short arr_6 [13] [13] ;
unsigned long long int arr_7 [13] ;
unsigned short arr_8 [13] [13] [13] ;
long long int arr_9 [13] ;
unsigned short arr_10 [13] [13] ;
unsigned char arr_11 [13] [13] ;
unsigned int arr_12 [13] [13] [13] ;
unsigned int arr_13 [13] ;
unsigned long long int arr_15 [13] ;
unsigned char arr_16 [13] ;
unsigned short arr_18 [13] ;
long long int arr_19 [13] [13] ;
unsigned short arr_21 [13] [13] [13] ;
short arr_22 [13] ;
int arr_26 [13] [13] [13] [13] ;
unsigned int arr_28 [13] [13] [13] [13] ;
short arr_29 [13] [13] [13] ;
short arr_30 [13] [13] [13] [13] ;
_Bool arr_31 [13] [13] [13] ;
unsigned long long int arr_32 [13] [13] [13] ;
short arr_33 [13] [13] [13] [13] ;
unsigned char arr_35 [13] [13] [13] [13] [13] ;
unsigned char arr_37 [13] [13] [13] [13] ;
unsigned long long int arr_38 [13] [13] [13] ;
short arr_43 [13] [13] [13] ;
short arr_2 [23] ;
unsigned int arr_3 [23] ;
signed char arr_4 [23] ;
unsigned long long int arr_17 [13] ;
unsigned int arr_20 [13] ;
unsigned int arr_23 [13] [13] [13] ;
unsigned long long int arr_24 [13] [13] [13] ;
int arr_39 [13] [13] [13] [13] ;
unsigned long long int arr_42 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -3078677010613669833LL : 1927908936242675472LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)46119;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)30711;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 5754727674129192480ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)9005;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -303979077419368177LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)58980;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)129 : (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 595609798U : 2184154373U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 3561350896U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 4717412703034376506ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (unsigned short)32412;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = 8228101327640849040LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)60938 : (unsigned short)60763;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (short)9360;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2013847617 : -1694981641;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 3330972070U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (short)4891;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (short)-8892;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6412513978140031977ULL : 597779131550750601ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (short)12233;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)230 : (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 4974704455039322420ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (short)17918;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)10566 : (short)-2257;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1823772184U : 355181461U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-67 : (signed char)27;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 13790373118873186115ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = 2738524679U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4022421773U : 2360126518U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17039544790617107410ULL : 5750347034820459359ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1288494729 : -938173904;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 290499924954009940ULL : 205658414781656985ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
