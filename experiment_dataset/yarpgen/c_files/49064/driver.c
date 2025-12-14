#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)165;
int var_1 = -2042601243;
unsigned short var_2 = (unsigned short)48756;
unsigned long long int var_4 = 13361664654562557548ULL;
signed char var_5 = (signed char)105;
unsigned long long int var_6 = 12980217826240144421ULL;
_Bool var_7 = (_Bool)0;
int var_8 = -136497993;
unsigned short var_9 = (unsigned short)1822;
short var_10 = (short)2867;
short var_11 = (short)29260;
long long int var_12 = -2729724690110227208LL;
unsigned long long int var_13 = 15283020941034755033ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)192;
unsigned long long int var_16 = 5289785852934995246ULL;
int zero = 0;
signed char var_17 = (signed char)-13;
unsigned int var_18 = 422837605U;
signed char var_19 = (signed char)119;
unsigned short var_20 = (unsigned short)10568;
short var_21 = (short)-18833;
unsigned long long int var_22 = 13146311704537840919ULL;
unsigned char var_23 = (unsigned char)133;
_Bool var_24 = (_Bool)0;
long long int var_25 = -373194271522127976LL;
unsigned short var_26 = (unsigned short)51365;
signed char var_27 = (signed char)60;
signed char var_28 = (signed char)-87;
signed char var_29 = (signed char)93;
int var_30 = -1558600529;
unsigned int var_31 = 2648816096U;
int var_32 = 1769844248;
_Bool var_33 = (_Bool)1;
long long int var_34 = -7616970099187047631LL;
short var_35 = (short)-15734;
unsigned short var_36 = (unsigned short)3598;
unsigned char var_37 = (unsigned char)10;
long long int var_38 = -4642148203522760588LL;
unsigned int var_39 = 1492352871U;
unsigned int var_40 = 1569643239U;
signed char var_41 = (signed char)26;
unsigned long long int var_42 = 14632862199501207843ULL;
short var_43 = (short)-18448;
signed char var_44 = (signed char)-43;
int var_45 = 39031630;
unsigned int var_46 = 2795328028U;
short var_47 = (short)-773;
int var_48 = -403175540;
short var_49 = (short)-2849;
unsigned long long int var_50 = 17178324539352585535ULL;
unsigned short var_51 = (unsigned short)43130;
short var_52 = (short)13467;
unsigned int var_53 = 394288293U;
unsigned long long int var_54 = 10477090741772651395ULL;
unsigned short var_55 = (unsigned short)26931;
unsigned char var_56 = (unsigned char)148;
unsigned short var_57 = (unsigned short)14435;
unsigned short var_58 = (unsigned short)55359;
unsigned long long int var_59 = 12451497260848222069ULL;
unsigned int var_60 = 2254836498U;
short var_61 = (short)-5871;
int var_62 = 1708835244;
unsigned int var_63 = 2916820816U;
short var_64 = (short)715;
signed char var_65 = (signed char)-42;
long long int var_66 = 8453978349772150062LL;
short var_67 = (short)19157;
unsigned short var_68 = (unsigned short)534;
signed char var_69 = (signed char)-53;
unsigned int var_70 = 634916408U;
unsigned char var_71 = (unsigned char)110;
signed char var_72 = (signed char)122;
_Bool var_73 = (_Bool)1;
unsigned long long int var_74 = 699143275314062799ULL;
unsigned int var_75 = 2327374561U;
signed char var_76 = (signed char)-23;
_Bool var_77 = (_Bool)0;
short var_78 = (short)23953;
long long int var_79 = -8082056430252767592LL;
unsigned long long int var_80 = 10359037483817517595ULL;
signed char var_81 = (signed char)110;
unsigned long long int arr_4 [18] [18] [18] ;
unsigned short arr_7 [18] [18] ;
unsigned long long int arr_8 [18] [18] [18] [18] [18] ;
short arr_10 [18] [18] [18] [18] [18] [18] ;
unsigned int arr_12 [18] [18] ;
long long int arr_13 [18] [18] ;
short arr_15 [18] [18] [18] ;
short arr_18 [18] [18] [18] [18] [18] ;
_Bool arr_19 [18] [18] ;
unsigned char arr_22 [18] [18] ;
long long int arr_24 [18] [18] [18] ;
short arr_26 [18] [18] [18] ;
_Bool arr_28 [18] [18] [18] ;
unsigned long long int arr_29 [18] [18] [18] [18] ;
long long int arr_30 [18] [18] ;
unsigned char arr_32 [18] [18] [18] [18] [18] [18] ;
unsigned short arr_40 [11] [11] ;
unsigned int arr_42 [11] [11] [11] [11] ;
unsigned long long int arr_54 [11] [11] [11] [11] [11] [11] ;
signed char arr_64 [11] [11] [11] [11] ;
signed char arr_80 [25] ;
unsigned char arr_83 [25] ;
unsigned long long int arr_84 [25] [25] [25] ;
unsigned char arr_85 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 10446706105871285291ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)25087;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 7734997034858767390ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)9614;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 3662552554U : 2140874875U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = -6788613612654857191LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)8817;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)29517;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = -8649224697165610020LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (short)2683;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 7954720412489286194ULL : 11306316247122301535ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_30 [i_0] [i_1] = -7581090904151588154LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)34652;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2733351552U : 2629814641U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11225279464813501804ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_80 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_83 [i_0] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_84 [i_0] [i_1] [i_2] = 2000105505521004900ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_85 [i_0] = (unsigned char)24;
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
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
