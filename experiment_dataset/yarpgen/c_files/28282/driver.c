#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_13 = 1734180592;
_Bool var_14 = (_Bool)1;
int var_15 = -1278750167;
long long int var_16 = -149747873441628271LL;
long long int var_17 = -8184922349140740606LL;
unsigned short var_18 = (unsigned short)65106;
unsigned int var_19 = 1732975292U;
unsigned short var_20 = (unsigned short)56658;
unsigned long long int var_21 = 3975809441230661328ULL;
unsigned int var_22 = 907584022U;
int var_23 = -1451894157;
signed char var_24 = (signed char)-19;
short var_25 = (short)2568;
signed char var_26 = (signed char)-17;
unsigned short var_27 = (unsigned short)27739;
_Bool var_28 = (_Bool)0;
unsigned char var_29 = (unsigned char)193;
long long int var_30 = -2025681454927365775LL;
unsigned char var_31 = (unsigned char)215;
unsigned int var_32 = 3225172971U;
unsigned int var_33 = 2884484053U;
unsigned int var_34 = 4095216291U;
unsigned short var_35 = (unsigned short)53435;
unsigned short var_36 = (unsigned short)737;
unsigned long long int var_37 = 17336496193186590449ULL;
unsigned long long int var_38 = 8695294169290743997ULL;
unsigned short var_39 = (unsigned short)36650;
unsigned char var_40 = (unsigned char)213;
unsigned short var_41 = (unsigned short)13764;
unsigned long long int var_42 = 12673721385742413325ULL;
unsigned int var_43 = 2104261380U;
unsigned long long int var_44 = 14605049786994701466ULL;
signed char var_45 = (signed char)54;
long long int var_46 = 3132936170090921750LL;
unsigned char var_47 = (unsigned char)239;
signed char var_48 = (signed char)-109;
unsigned long long int var_49 = 16054940484992307073ULL;
long long int var_50 = 5614423564199850126LL;
long long int var_51 = -4438047937545152657LL;
unsigned char var_52 = (unsigned char)103;
_Bool var_53 = (_Bool)1;
unsigned char var_54 = (unsigned char)162;
signed char var_55 = (signed char)31;
signed char var_56 = (signed char)-117;
unsigned int var_57 = 3094949490U;
unsigned char var_58 = (unsigned char)111;
unsigned long long int arr_12 [11] [11] [11] [11] ;
unsigned short arr_38 [24] [24] [24] [24] ;
short arr_64 [15] [15] [15] [15] [15] [15] [15] ;
unsigned char arr_67 [15] ;
unsigned short arr_72 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 7947339962987463164ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)2358 : (unsigned short)53225;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-1371;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_67 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_72 [i_0] [i_1] = (unsigned short)47154;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                hash(&seed, arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_67 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_72 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
