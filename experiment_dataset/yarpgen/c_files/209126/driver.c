#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3399480183U;
int var_1 = 887130471;
unsigned int var_2 = 2291734719U;
int var_3 = -2049041928;
unsigned short var_4 = (unsigned short)48649;
signed char var_5 = (signed char)-93;
signed char var_6 = (signed char)31;
short var_7 = (short)-31458;
unsigned short var_8 = (unsigned short)9718;
unsigned short var_9 = (unsigned short)13851;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 14439759152897314327ULL;
unsigned int var_12 = 3818172154U;
unsigned char var_13 = (unsigned char)160;
unsigned int var_15 = 540174899U;
unsigned int var_16 = 34073919U;
int zero = 0;
int var_18 = 442631574;
unsigned short var_19 = (unsigned short)22891;
unsigned int var_20 = 3797665005U;
int var_21 = -297777220;
unsigned char var_22 = (unsigned char)245;
unsigned short var_23 = (unsigned short)34122;
int var_24 = 1044294707;
unsigned long long int var_25 = 3904994066274838614ULL;
unsigned short var_26 = (unsigned short)37075;
int var_27 = -1618118676;
unsigned char var_28 = (unsigned char)66;
signed char var_29 = (signed char)89;
unsigned short var_30 = (unsigned short)18638;
unsigned short var_31 = (unsigned short)61969;
int var_32 = -1582506846;
unsigned long long int var_33 = 5441826463040469749ULL;
unsigned long long int var_34 = 4445405379776074300ULL;
unsigned long long int var_35 = 10212822326408466234ULL;
unsigned int var_36 = 588110179U;
unsigned long long int var_37 = 15064586032018588719ULL;
unsigned char var_38 = (unsigned char)245;
short var_39 = (short)-8015;
int var_40 = -1589307562;
unsigned long long int var_41 = 9891291340790125573ULL;
unsigned short var_42 = (unsigned short)57949;
unsigned long long int var_43 = 16050377771704187385ULL;
unsigned short var_44 = (unsigned short)44535;
int var_45 = 1982431910;
short var_46 = (short)-19190;
_Bool var_47 = (_Bool)1;
unsigned long long int var_48 = 3599969114777490330ULL;
unsigned short var_49 = (unsigned short)2862;
int var_50 = 712991877;
unsigned int var_51 = 322482721U;
unsigned int var_52 = 2738799322U;
unsigned long long int var_53 = 3465834108052662183ULL;
unsigned long long int var_54 = 12492546564238737724ULL;
_Bool var_55 = (_Bool)1;
unsigned short var_56 = (unsigned short)5822;
unsigned short var_57 = (unsigned short)14375;
unsigned short var_58 = (unsigned short)57906;
unsigned short var_59 = (unsigned short)34888;
unsigned long long int var_60 = 3842430548572144385ULL;
unsigned int var_61 = 2371521484U;
unsigned long long int var_62 = 4558071488329911576ULL;
unsigned long long int var_63 = 9610866351544587219ULL;
_Bool var_64 = (_Bool)0;
int var_65 = 1108609878;
unsigned int var_66 = 1935358399U;
unsigned short var_67 = (unsigned short)17551;
unsigned short var_68 = (unsigned short)37822;
int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
short arr_2 [22] ;
signed char arr_3 [22] ;
unsigned long long int arr_4 [18] [18] ;
unsigned long long int arr_5 [18] ;
unsigned long long int arr_6 [18] ;
unsigned long long int arr_10 [13] ;
int arr_13 [13] [13] ;
int arr_15 [13] [13] [13] [13] [13] [13] ;
int arr_16 [13] ;
unsigned short arr_17 [13] [13] [13] [13] [13] ;
int arr_18 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_19 [13] [13] [13] [13] [13] ;
unsigned short arr_20 [13] [13] [13] ;
int arr_21 [13] [13] ;
short arr_22 [13] ;
unsigned short arr_23 [13] ;
unsigned int arr_27 [13] [13] ;
unsigned long long int arr_29 [13] [13] ;
unsigned char arr_33 [13] [13] [13] [13] [13] [13] [13] ;
unsigned int arr_34 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_37 [13] [13] [13] [13] [13] ;
unsigned short arr_40 [13] [13] [13] [13] ;
unsigned short arr_54 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -950016652;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1188422709616774130ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)32117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 1016822421086882761ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 10316201183981206509ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 9064278767197904626ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 16656047790222181246ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = -1153192687;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1334206377;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = -1308658992;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)9514;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1873862104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 6084918978771736423ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)60910 : (unsigned short)26452;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 127239235 : 385755792;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (short)25683;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (unsigned short)11191;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_27 [i_0] [i_1] = 3061043633U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_29 [i_0] [i_1] = 840061938635644293ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3067448267U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = 15195438447160866985ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (unsigned short)2791;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_54 [i_0] [i_1] = (unsigned short)60378;
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
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
