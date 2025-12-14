#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46337;
unsigned char var_1 = (unsigned char)58;
_Bool var_2 = (_Bool)1;
long long int var_3 = 6672688776701091967LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 16912366514656752342ULL;
short var_8 = (short)29909;
unsigned short var_9 = (unsigned short)37438;
signed char var_10 = (signed char)-117;
unsigned long long int var_11 = 4789427493138683818ULL;
signed char var_12 = (signed char)38;
long long int var_13 = 8347120294794849348LL;
unsigned long long int var_14 = 3407350352882557748ULL;
long long int var_15 = 1425949564373246471LL;
long long int var_16 = 4414292665765052527LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -1691820190571537912LL;
unsigned char var_19 = (unsigned char)22;
int var_20 = 1382468354;
unsigned short var_21 = (unsigned short)9710;
unsigned long long int var_22 = 9022884207208759623ULL;
unsigned int var_23 = 1433156534U;
unsigned int var_24 = 1903554769U;
unsigned int var_25 = 3003426892U;
unsigned char var_26 = (unsigned char)136;
unsigned short var_27 = (unsigned short)35376;
unsigned long long int var_28 = 12259532396838633471ULL;
unsigned char var_29 = (unsigned char)250;
short var_30 = (short)-3493;
unsigned long long int var_31 = 2208920002245077269ULL;
unsigned long long int var_32 = 6257863675061753332ULL;
unsigned short var_33 = (unsigned short)22106;
_Bool var_34 = (_Bool)1;
unsigned char var_35 = (unsigned char)47;
_Bool var_36 = (_Bool)0;
int var_37 = 1396975021;
unsigned short var_38 = (unsigned short)48724;
long long int var_39 = -6520385734131704935LL;
unsigned char var_40 = (unsigned char)135;
long long int var_41 = -3621859150215490216LL;
unsigned int var_42 = 362706000U;
unsigned long long int var_43 = 17071729463639917497ULL;
_Bool var_44 = (_Bool)1;
unsigned long long int var_45 = 6527411917605660635ULL;
unsigned char var_46 = (unsigned char)14;
unsigned long long int var_47 = 13688671312756896496ULL;
short var_48 = (short)-26354;
unsigned long long int var_49 = 3662824985019827031ULL;
long long int var_50 = 7202204589142391351LL;
short var_51 = (short)-23935;
unsigned short var_52 = (unsigned short)10721;
_Bool var_53 = (_Bool)0;
signed char var_54 = (signed char)62;
unsigned long long int var_55 = 7800032428979350987ULL;
unsigned short var_56 = (unsigned short)50593;
short var_57 = (short)1534;
_Bool arr_0 [25] ;
long long int arr_1 [25] ;
unsigned short arr_2 [25] ;
int arr_4 [25] ;
long long int arr_5 [25] [25] ;
unsigned char arr_6 [25] [25] [25] ;
unsigned long long int arr_7 [25] [25] ;
unsigned long long int arr_8 [25] [25] ;
long long int arr_9 [25] [25] [25] ;
unsigned short arr_15 [25] [25] [25] [25] ;
unsigned long long int arr_17 [25] [25] [25] ;
unsigned long long int arr_18 [25] [25] ;
unsigned char arr_19 [25] [25] [25] [25] [25] ;
_Bool arr_20 [25] [25] [25] [25] [25] ;
long long int arr_21 [25] [25] [25] [25] [25] ;
unsigned long long int arr_23 [25] [25] [25] [25] [25] [25] ;
long long int arr_24 [25] [25] [25] [25] [25] ;
long long int arr_28 [25] [25] [25] ;
unsigned short arr_36 [11] ;
int arr_38 [11] [11] [11] ;
long long int arr_47 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 8579092496657700754LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)58502;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1727835682;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 2765128828536343702LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 4367039019769181483ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 4542325091903770467ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1004188853454496278LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)15558;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 7936498040315502409ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = 12544191647181954077ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -768106092615593679LL : -4481165867024046607LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 624478275067222795ULL : 15489080793931429416ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -2636006845628761680LL : 1221468389377790966LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -3783589475024653494LL : -7782063644509660370LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_36 [i_0] = (unsigned short)16003;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = 1621259277;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_47 [i_0] = -934045854963104307LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
