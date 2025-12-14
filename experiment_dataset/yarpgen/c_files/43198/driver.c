#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1730064209062038295LL;
long long int var_1 = 1332887895057425482LL;
long long int var_2 = -574903264583289674LL;
unsigned long long int var_3 = 2709219610528319966ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 6685795822921268305ULL;
int var_6 = 983935073;
_Bool var_7 = (_Bool)0;
long long int var_8 = -5006217541916629092LL;
long long int var_10 = -8877806250364035441LL;
int var_12 = 808878018;
unsigned short var_13 = (unsigned short)50300;
signed char var_14 = (signed char)114;
signed char var_15 = (signed char)-123;
unsigned long long int var_16 = 12234836293955906512ULL;
unsigned long long int var_18 = 3056626133273636295ULL;
int zero = 0;
long long int var_19 = 5393397128549735070LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 4908561044763820116LL;
unsigned int var_22 = 4003418147U;
long long int var_23 = 7109162971115284341LL;
long long int var_24 = -6828427175679215825LL;
_Bool var_25 = (_Bool)0;
unsigned short var_26 = (unsigned short)49075;
unsigned int var_27 = 99109039U;
unsigned char var_28 = (unsigned char)67;
signed char var_29 = (signed char)97;
unsigned int var_30 = 74227034U;
signed char var_31 = (signed char)-88;
long long int var_32 = -461836731048402317LL;
_Bool var_33 = (_Bool)0;
signed char var_34 = (signed char)-97;
_Bool var_35 = (_Bool)0;
unsigned char var_36 = (unsigned char)64;
long long int var_37 = 3413476515175322444LL;
unsigned int var_38 = 3576284362U;
signed char var_39 = (signed char)-31;
unsigned int var_40 = 4107930980U;
long long int var_41 = 2010235596872288300LL;
signed char var_42 = (signed char)23;
signed char var_43 = (signed char)19;
unsigned long long int var_44 = 18114476789681370003ULL;
unsigned int var_45 = 1984193063U;
int var_46 = -1778575367;
_Bool var_47 = (_Bool)0;
unsigned long long int var_48 = 4247313113288575460ULL;
int var_49 = -1429071197;
_Bool var_50 = (_Bool)0;
signed char var_51 = (signed char)89;
signed char var_52 = (signed char)93;
signed char var_53 = (signed char)50;
short var_54 = (short)22970;
unsigned int var_55 = 669805626U;
long long int var_56 = 8639071295628647747LL;
_Bool var_57 = (_Bool)0;
long long int var_58 = -3568449768817574485LL;
long long int var_59 = -246937723205834847LL;
int var_60 = 993232865;
unsigned long long int var_61 = 7760523553430431838ULL;
unsigned long long int var_62 = 8521467612318749704ULL;
signed char var_63 = (signed char)-64;
unsigned long long int var_64 = 6401542488557426402ULL;
unsigned long long int var_65 = 17684071659884189293ULL;
long long int var_66 = 6516945697940970402LL;
unsigned short var_67 = (unsigned short)47957;
unsigned int var_68 = 268314269U;
unsigned int var_69 = 2501093451U;
unsigned int var_70 = 1566894941U;
int arr_0 [15] [15] ;
unsigned long long int arr_3 [15] [15] [15] ;
long long int arr_4 [15] [15] [15] ;
long long int arr_5 [15] ;
long long int arr_6 [15] [15] [15] ;
int arr_7 [15] [15] [15] [15] ;
unsigned long long int arr_10 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_11 [15] [15] [15] [15] [15] [15] [15] ;
long long int arr_15 [15] [15] [15] ;
unsigned int arr_17 [15] [15] ;
unsigned long long int arr_18 [15] ;
int arr_26 [15] [15] [15] [15] [15] ;
unsigned long long int arr_28 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_29 [15] [15] [15] [15] [15] [15] [15] ;
unsigned int arr_32 [25] ;
unsigned long long int arr_35 [25] ;
signed char arr_37 [25] ;
int arr_38 [25] [25] ;
unsigned long long int arr_40 [16] ;
long long int arr_41 [16] [16] [16] ;
int arr_42 [16] [16] [16] ;
unsigned long long int arr_43 [16] [16] [16] [16] ;
unsigned long long int arr_45 [16] [16] [16] [16] [16] ;
unsigned long long int arr_46 [16] [16] [16] [16] ;
unsigned short arr_47 [16] [16] [16] [16] [16] [16] [16] ;
unsigned int arr_48 [16] ;
short arr_49 [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -2043581386 : 86346175;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2309437564975815870ULL : 9280858651838722311ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 552982695504527032LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 598855252349288021LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -5811983324472188859LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 38126491;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 6839472888331371951ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (unsigned short)11292 : (unsigned short)4943;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 9088415892966922841LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 3432342869U : 197279223U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = 5612153149322973340ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 6735283 : 1778772116;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 8102377527737358765ULL : 348434914955739135ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 3457131841U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_32 [i_0] = 4008567370U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = 5046144500436659746ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_38 [i_0] [i_1] = -366837713;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_40 [i_0] = 16917115043137887159ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = -8831762515510458729LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = 942573557;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = 16970051599797585578ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = 9376737114942382159ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = 17812789110920573774ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)34076;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_48 [i_0] = 2513875868U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)7428;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
