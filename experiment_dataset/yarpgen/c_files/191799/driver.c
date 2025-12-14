#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)127;
unsigned long long int var_1 = 16802186440373962762ULL;
unsigned long long int var_2 = 1770205917558081012ULL;
unsigned long long int var_3 = 8632751018013716513ULL;
unsigned long long int var_4 = 6901818203673311102ULL;
unsigned int var_5 = 3112283737U;
unsigned long long int var_6 = 16476134229360247879ULL;
unsigned long long int var_7 = 109263053626171786ULL;
unsigned int var_8 = 27688242U;
unsigned long long int var_9 = 16363539757186974092ULL;
int zero = 0;
unsigned long long int var_11 = 12638749567174881909ULL;
unsigned long long int var_12 = 1364093180327185825ULL;
unsigned int var_13 = 1991439409U;
unsigned char var_14 = (unsigned char)104;
unsigned int var_15 = 2384860671U;
short var_16 = (short)-4281;
int var_17 = 869784907;
unsigned long long int var_18 = 11320530841516655712ULL;
unsigned int var_19 = 3098483137U;
unsigned int var_20 = 1406065102U;
unsigned long long int var_21 = 13664980496316169822ULL;
unsigned int var_22 = 2813111415U;
unsigned long long int var_23 = 15117195427974719384ULL;
unsigned int var_24 = 2446924167U;
unsigned long long int var_25 = 18442816750732857104ULL;
unsigned long long int var_26 = 10212727752986762634ULL;
unsigned long long int var_27 = 13450032787081785879ULL;
unsigned int var_28 = 3535346003U;
unsigned char var_29 = (unsigned char)217;
unsigned int var_30 = 3065051238U;
unsigned int var_31 = 2120446314U;
unsigned long long int var_32 = 13216454738831512586ULL;
int var_33 = -1109019874;
int var_34 = -300728626;
unsigned long long int var_35 = 3582536883807020081ULL;
unsigned long long int var_36 = 18335088452775733154ULL;
unsigned int var_37 = 3590976386U;
unsigned long long int var_38 = 360895529912234865ULL;
unsigned long long int var_39 = 3837072805680088089ULL;
unsigned long long int var_40 = 12123978239466504102ULL;
unsigned long long int var_41 = 5906917255637525672ULL;
unsigned long long int var_42 = 16443636777834549875ULL;
unsigned long long int var_43 = 6063320882355252153ULL;
int arr_0 [18] ;
unsigned long long int arr_2 [18] [18] [18] ;
unsigned char arr_4 [18] [18] [18] ;
unsigned char arr_5 [18] [18] [18] ;
unsigned long long int arr_6 [18] ;
int arr_7 [18] [18] ;
int arr_9 [18] ;
short arr_10 [18] [18] ;
short arr_13 [18] [18] [18] [18] ;
unsigned long long int arr_14 [18] [18] [18] ;
unsigned long long int arr_18 [18] [18] [18] [18] [18] [18] [18] ;
unsigned char arr_20 [18] [18] ;
short arr_21 [18] [18] ;
int arr_25 [18] [18] [18] ;
unsigned int arr_26 [18] [18] [18] [18] [18] [18] ;
unsigned int arr_29 [15] ;
unsigned char arr_31 [15] ;
unsigned long long int arr_11 [18] [18] [18] ;
int arr_19 [18] [18] [18] [18] ;
unsigned long long int arr_34 [15] ;
unsigned long long int arr_43 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -2090755724;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 17564543934177020978ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)226 : (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)56 : (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 7550547031449890202ULL : 5810831200608697408ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -1856113897 : -1852587722;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1471981603 : -1281742843;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)16717 : (short)-31369;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)10122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 11480343405934416992ULL : 10600656587463950876ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 9880211234287040363ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)6421 : (short)-29689;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = -375773842;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 121829040U : 3930784514U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = 3222669392U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_31 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13745545769612243931ULL : 7787666602044205306ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2013347068 : 1128761976;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_34 [i_0] = 7888232233313705012ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_43 [i_0] = 594960615202622641ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
