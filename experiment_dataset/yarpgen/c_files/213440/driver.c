#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3552246858678385804ULL;
short var_1 = (short)-8315;
unsigned char var_2 = (unsigned char)251;
unsigned char var_3 = (unsigned char)255;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)20;
unsigned long long int var_7 = 7715573854130104186ULL;
signed char var_8 = (signed char)116;
short var_9 = (short)-11071;
unsigned int var_10 = 2222864384U;
unsigned short var_11 = (unsigned short)27956;
unsigned long long int var_12 = 11068098248299290503ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)45;
unsigned char var_14 = (unsigned char)16;
long long int var_15 = 2101698432841464576LL;
int var_16 = 1656735080;
signed char var_17 = (signed char)103;
unsigned char var_18 = (unsigned char)191;
_Bool var_19 = (_Bool)1;
short var_20 = (short)10588;
long long int var_21 = 6565350951092486387LL;
signed char var_22 = (signed char)78;
unsigned int var_23 = 2010172643U;
unsigned char var_24 = (unsigned char)120;
signed char var_25 = (signed char)-29;
unsigned long long int var_26 = 5753715564673437896ULL;
long long int var_27 = -1594591411558420249LL;
unsigned char var_28 = (unsigned char)114;
short var_29 = (short)6601;
unsigned long long int var_30 = 17274024443825343490ULL;
unsigned char var_31 = (unsigned char)38;
unsigned short var_32 = (unsigned short)10120;
unsigned long long int var_33 = 17795640220979544882ULL;
unsigned char var_34 = (unsigned char)57;
unsigned int var_35 = 3688813892U;
unsigned short var_36 = (unsigned short)51650;
_Bool var_37 = (_Bool)0;
_Bool var_38 = (_Bool)1;
unsigned long long int var_39 = 17178222180579453660ULL;
unsigned char var_40 = (unsigned char)91;
unsigned long long int var_41 = 8893192567181051640ULL;
unsigned char var_42 = (unsigned char)38;
short var_43 = (short)-9492;
unsigned long long int var_44 = 13612506342925224532ULL;
unsigned long long int var_45 = 13987433925285241552ULL;
signed char var_46 = (signed char)122;
short var_47 = (short)2791;
_Bool var_48 = (_Bool)1;
unsigned int var_49 = 556578773U;
unsigned int var_50 = 2376434522U;
unsigned short var_51 = (unsigned short)54155;
unsigned char var_52 = (unsigned char)60;
unsigned char var_53 = (unsigned char)6;
short var_54 = (short)12612;
unsigned int var_55 = 1698247560U;
unsigned char var_56 = (unsigned char)122;
long long int var_57 = 6098320777833505971LL;
unsigned char var_58 = (unsigned char)196;
unsigned int var_59 = 3042087984U;
short var_60 = (short)-24998;
unsigned int var_61 = 2965530016U;
unsigned long long int var_62 = 12518875756321843045ULL;
long long int var_63 = 7923199638080528954LL;
unsigned char var_64 = (unsigned char)252;
unsigned char var_65 = (unsigned char)208;
unsigned long long int var_66 = 2147211385532449691ULL;
int var_67 = 1789186266;
unsigned char var_68 = (unsigned char)170;
signed char var_69 = (signed char)-65;
short var_70 = (short)-8387;
unsigned char var_71 = (unsigned char)52;
unsigned short var_72 = (unsigned short)53158;
_Bool var_73 = (_Bool)0;
unsigned char var_74 = (unsigned char)11;
signed char var_75 = (signed char)-114;
unsigned long long int var_76 = 6452482082277656238ULL;
unsigned int var_77 = 3705199685U;
unsigned long long int var_78 = 14531861639359296736ULL;
unsigned long long int var_79 = 16750600578276009826ULL;
_Bool var_80 = (_Bool)1;
unsigned int arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
_Bool arr_3 [20] ;
unsigned int arr_4 [25] [25] ;
unsigned char arr_5 [25] ;
unsigned char arr_6 [25] [25] ;
unsigned char arr_7 [25] ;
unsigned char arr_8 [25] ;
unsigned char arr_9 [25] [25] ;
signed char arr_10 [25] ;
unsigned int arr_11 [25] [25] [25] ;
long long int arr_12 [25] [25] ;
_Bool arr_16 [25] [25] [25] [25] ;
unsigned int arr_17 [25] ;
long long int arr_18 [25] [25] [25] [25] [25] ;
signed char arr_20 [10] ;
unsigned long long int arr_21 [10] [10] ;
unsigned long long int arr_24 [10] ;
long long int arr_25 [10] ;
int arr_26 [10] [10] [10] ;
unsigned char arr_31 [10] [10] ;
int arr_32 [10] [10] [10] ;
unsigned int arr_40 [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_41 [10] [10] [10] [10] [10] ;
long long int arr_46 [10] [10] [10] ;
unsigned int arr_50 [10] ;
unsigned char arr_52 [10] [10] [10] [10] ;
unsigned int arr_58 [10] ;
_Bool arr_60 [10] [10] [10] [10] ;
signed char arr_61 [10] [10] [10] [10] ;
int arr_65 [10] [10] ;
unsigned char arr_67 [10] [10] [10] [10] ;
unsigned int arr_68 [10] [10] [10] [10] [10] [10] ;
unsigned int arr_70 [10] [10] [10] [10] ;
unsigned char arr_75 [10] ;
unsigned short arr_82 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 3203698185U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1065064864U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 3169850942U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)206 : (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)229 : (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 737084871U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? 7165473057897556325LL : 1043291818041998687LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = 191989656U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = -5389663718821095908LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_20 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = 9352428846323214583ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = 3237831422851956541ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = 4272205000891342635LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 895521648;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_31 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)117 : (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -2102785192 : -397796864;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1944300015U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 8558989380162106208ULL : 17148989698599569882ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = -4684637816040512751LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? 217042831U : 2722505408U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_58 [i_0] = 2015797414U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_65 [i_0] [i_1] = (i_1 % 2 == 0) ? -1019604323 : -2062176094;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)76 : (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 404233115U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = 1906448906U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_75 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_82 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)18011 : (unsigned short)60695;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
