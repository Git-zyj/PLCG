#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6262983199438596588LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 17110681741851561242ULL;
unsigned char var_4 = (unsigned char)231;
unsigned char var_5 = (unsigned char)150;
long long int var_6 = -5637521082567748333LL;
_Bool var_7 = (_Bool)0;
int var_8 = -1134727397;
short var_9 = (short)-115;
unsigned long long int var_10 = 142586407017944101ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = 515881304;
unsigned long long int var_13 = 7103742475845516051ULL;
long long int var_14 = -1815017261082767450LL;
unsigned char var_15 = (unsigned char)76;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)32533;
unsigned long long int var_18 = 3704893126035559408ULL;
long long int var_19 = 5907990226514265061LL;
unsigned short var_20 = (unsigned short)15461;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)243;
unsigned long long int var_23 = 9736253706882756834ULL;
short var_24 = (short)9959;
int var_25 = -1702436797;
unsigned long long int var_26 = 1463479506908149942ULL;
unsigned short var_27 = (unsigned short)41810;
int var_28 = -1903790766;
long long int var_29 = 5643193393276906295LL;
long long int var_30 = 7353721289257392549LL;
short var_31 = (short)24747;
unsigned long long int var_32 = 10285680649569179286ULL;
unsigned long long int arr_0 [12] [12] ;
unsigned char arr_1 [12] ;
signed char arr_3 [12] [12] ;
_Bool arr_5 [12] [12] [12] ;
signed char arr_6 [12] [12] [12] [12] ;
unsigned char arr_8 [12] ;
unsigned long long int arr_9 [12] ;
int arr_10 [12] [12] [12] [12] ;
long long int arr_11 [12] [12] [12] ;
unsigned long long int arr_12 [12] [12] [12] ;
long long int arr_13 [12] [12] ;
signed char arr_14 [12] ;
long long int arr_26 [17] ;
_Bool arr_27 [17] [17] ;
long long int arr_30 [17] [17] ;
long long int arr_33 [17] [17] ;
unsigned char arr_36 [16] [16] ;
_Bool arr_40 [13] ;
short arr_44 [13] ;
long long int arr_45 [13] [13] ;
long long int arr_48 [13] ;
_Bool arr_52 [13] [13] ;
int arr_58 [13] [13] [13] [13] ;
unsigned short arr_7 [12] [12] [12] [12] ;
unsigned char arr_17 [12] ;
long long int arr_22 [12] ;
int arr_23 [12] [12] [12] ;
unsigned char arr_24 [12] [12] [12] ;
long long int arr_25 [12] ;
unsigned long long int arr_28 [17] ;
unsigned long long int arr_34 [17] [17] [17] ;
long long int arr_43 [13] ;
_Bool arr_46 [13] [13] ;
long long int arr_54 [13] ;
unsigned long long int arr_59 [13] [13] ;
unsigned long long int arr_60 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 4738776322350960901ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 356684042856728260ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1697131107;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -6953186452157353024LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 14729712324487906837ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = -2565427272118815684LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)9 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = -4930340312751618321LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_30 [i_0] [i_1] = 3907282520220931089LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_33 [i_0] [i_1] = 6520020702113915263LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_40 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_44 [i_0] = (short)-7100;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_45 [i_0] [i_1] = 3572574596512432167LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_48 [i_0] = 2642944801801281131LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_52 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = 187186369;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)42977 : (unsigned short)14496;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = 3515289452558875672LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -1015730551;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned char)226;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = -6327682820658154760LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 9123012744665085646ULL : 9365373293983444963ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 10389950829563142043ULL : 7383244243709259989ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_43 [i_0] = -5007293353177551063LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_46 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_54 [i_0] = -8161054596786488275LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_59 [i_0] [i_1] = 9896461464045366789ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_60 [i_0] = 17466449741397068564ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_59 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_60 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
