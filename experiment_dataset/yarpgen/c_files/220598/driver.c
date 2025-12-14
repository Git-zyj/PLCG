#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
short var_2 = (short)27076;
unsigned int var_5 = 3923159597U;
_Bool var_6 = (_Bool)0;
long long int var_7 = -4029357217356694239LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-7510;
int zero = 0;
unsigned int var_10 = 2201852038U;
int var_11 = -2004758654;
_Bool var_12 = (_Bool)0;
int var_13 = 1633133922;
unsigned short var_14 = (unsigned short)22156;
int var_15 = 1505999301;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 156889212442184923LL;
unsigned short var_19 = (unsigned short)36301;
unsigned int var_20 = 2204180243U;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)39394;
long long int var_23 = -4262581849338346324LL;
short var_24 = (short)-27791;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)40460;
int var_27 = -805118974;
long long int var_28 = -4274645040393331640LL;
unsigned int var_29 = 319022871U;
unsigned int var_30 = 1112543119U;
signed char var_31 = (signed char)89;
unsigned short var_32 = (unsigned short)61047;
int var_33 = -1840129003;
short var_34 = (short)17408;
short var_35 = (short)15614;
_Bool var_36 = (_Bool)1;
unsigned int var_37 = 657272356U;
short var_38 = (short)-22641;
int var_39 = -804446832;
short var_40 = (short)9824;
unsigned int var_41 = 281619447U;
short var_42 = (short)-30213;
signed char var_43 = (signed char)-108;
_Bool var_44 = (_Bool)0;
unsigned short var_45 = (unsigned short)20063;
unsigned short var_46 = (unsigned short)39926;
_Bool var_47 = (_Bool)1;
short var_48 = (short)-1714;
short var_49 = (short)-18541;
short var_50 = (short)-30159;
long long int var_51 = -1850863130488653053LL;
int var_52 = -505799544;
unsigned long long int var_53 = 7317301722515131518ULL;
signed char var_54 = (signed char)62;
unsigned short var_55 = (unsigned short)14773;
int var_56 = 962405105;
int var_57 = -425335365;
_Bool var_58 = (_Bool)0;
short var_59 = (short)2866;
_Bool var_60 = (_Bool)1;
unsigned short var_61 = (unsigned short)13898;
int var_62 = -1129440950;
long long int var_63 = -8011479437885953429LL;
_Bool var_64 = (_Bool)1;
_Bool var_65 = (_Bool)1;
_Bool var_66 = (_Bool)0;
unsigned short arr_0 [24] ;
_Bool arr_1 [24] ;
int arr_2 [24] ;
_Bool arr_4 [24] [24] ;
_Bool arr_5 [24] ;
unsigned short arr_6 [24] ;
int arr_7 [24] ;
unsigned short arr_8 [24] ;
unsigned int arr_9 [24] [24] ;
short arr_11 [15] [15] ;
short arr_13 [10] ;
unsigned int arr_14 [10] ;
int arr_15 [10] ;
short arr_16 [10] ;
_Bool arr_18 [10] ;
unsigned short arr_33 [25] ;
long long int arr_34 [25] ;
int arr_36 [25] [25] [25] ;
short arr_37 [25] [25] [25] ;
unsigned short arr_38 [25] [25] ;
long long int arr_39 [25] [25] [25] ;
unsigned long long int arr_41 [25] [25] ;
long long int arr_42 [25] [25] ;
long long int arr_43 [25] ;
short arr_44 [25] [25] [25] ;
_Bool arr_46 [25] [25] ;
short arr_47 [25] [25] [25] [25] ;
unsigned short arr_48 [25] [25] [25] [25] ;
long long int arr_51 [25] [25] [25] ;
int arr_52 [25] ;
long long int arr_53 [25] [25] [25] [25] ;
long long int arr_54 [25] [25] [25] [25] ;
short arr_55 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_56 [25] [25] [25] ;
unsigned int arr_57 [25] [25] ;
unsigned short arr_60 [25] [25] [25] ;
unsigned int arr_61 [25] [25] [25] [25] ;
unsigned short arr_65 [25] [25] [25] [25] ;
long long int arr_66 [25] [25] [25] ;
short arr_67 [25] [25] ;
unsigned short arr_68 [25] ;
_Bool arr_70 [25] [25] [25] [25] ;
int arr_72 [25] [25] [25] ;
unsigned short arr_73 [25] [25] [25] ;
unsigned int arr_78 [25] [25] [25] [25] [25] [25] [25] ;
unsigned int arr_79 [25] [25] [25] [25] [25] ;
unsigned short arr_82 [25] [25] [25] ;
int arr_3 [24] [24] ;
_Bool arr_12 [15] ;
long long int arr_40 [25] ;
unsigned long long int arr_84 [25] ;
short arr_85 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)24929;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -1125487540;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)10610;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = -1144711270;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)20689;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 1082712178U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)20151 : (short)7576;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (short)13856;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = 1609575668U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = 1444750364;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (short)15184;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = (unsigned short)21394;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_34 [i_0] = 130688885961130144LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 39379691;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (short)-29458;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned short)6031;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 8020591358777286213LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_41 [i_0] [i_1] = 14055170376173163890ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_42 [i_0] [i_1] = -4908024910865943622LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_43 [i_0] = 6630148594939007473LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (short)12137;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_46 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (short)-19854;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16373;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = -8882526111961407293LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_52 [i_0] = -1291902965;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = -3023377800480731013LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = 8612159446669931339LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)17140;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = 2666873660U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_57 [i_0] [i_1] = 2246566465U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_60 [i_0] [i_1] [i_2] = (unsigned short)36319;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = 345219512U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_65 [i_0] [i_1] [i_2] [i_3] = (unsigned short)36575;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_66 [i_0] [i_1] [i_2] = -5630214808725049091LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_67 [i_0] [i_1] = (short)-9297;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_68 [i_0] = (unsigned short)34452;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_72 [i_0] [i_1] [i_2] = -1814990349;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_73 [i_0] [i_1] [i_2] = (unsigned short)2630;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_78 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 86295672U : 2781685917U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_79 [i_0] [i_1] [i_2] [i_3] [i_4] = 3918627740U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_82 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)23983 : (unsigned short)17283;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -410935566 : 1417225732;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_40 [i_0] = 6918286921573622012LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_84 [i_0] = (i_0 % 2 == 0) ? 7749908708464695766ULL : 1365425317231326783ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_85 [i_0] = (short)22865;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_84 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_85 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
