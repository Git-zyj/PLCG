#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14663078152471148925ULL;
unsigned long long int var_1 = 8391338736581228203ULL;
unsigned long long int var_2 = 13923161117620792264ULL;
unsigned long long int var_3 = 13834399700339438773ULL;
unsigned long long int var_4 = 17063711452897816959ULL;
unsigned long long int var_5 = 643639114397985328ULL;
unsigned long long int var_6 = 8152583862442810839ULL;
unsigned long long int var_7 = 13627787043491345596ULL;
unsigned long long int var_8 = 11475268454007036037ULL;
unsigned long long int var_9 = 15031071041336219864ULL;
unsigned long long int var_10 = 6546977011025028539ULL;
unsigned long long int var_11 = 18273955494045525614ULL;
unsigned long long int var_12 = 4695693103788115521ULL;
unsigned long long int var_13 = 2804533845116384802ULL;
unsigned long long int var_14 = 2719674552826852112ULL;
int zero = 0;
unsigned long long int var_15 = 9870409211779994713ULL;
unsigned long long int var_16 = 1707779182190321032ULL;
unsigned long long int var_17 = 15699019926303304757ULL;
unsigned long long int var_18 = 7363745402829418607ULL;
unsigned long long int var_19 = 13817626659116945739ULL;
unsigned long long int var_20 = 5205773195677991510ULL;
unsigned long long int var_21 = 14171208730169133500ULL;
unsigned long long int var_22 = 8334570297913192286ULL;
unsigned long long int var_23 = 1880068640057343248ULL;
unsigned long long int var_24 = 11046806174096551529ULL;
unsigned long long int var_25 = 6563723033441643185ULL;
unsigned long long int var_26 = 14071865333465245569ULL;
unsigned long long int var_27 = 12647725579855875614ULL;
unsigned long long int var_28 = 14086874712676936088ULL;
unsigned long long int var_29 = 8053983237562051218ULL;
unsigned long long int var_30 = 682533360501621562ULL;
unsigned long long int var_31 = 14787066032609670250ULL;
unsigned long long int var_32 = 12192328952467907223ULL;
unsigned long long int var_33 = 7581659183686546356ULL;
unsigned long long int var_34 = 10022249317051661985ULL;
unsigned long long int var_35 = 15514591861330922218ULL;
unsigned long long int arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_2 [21] ;
unsigned long long int arr_5 [21] [21] ;
unsigned long long int arr_6 [21] [21] [21] [21] ;
unsigned long long int arr_9 [21] [21] [21] [21] [21] [21] ;
unsigned long long int arr_10 [21] [21] [21] [21] ;
unsigned long long int arr_11 [21] ;
unsigned long long int arr_12 [21] ;
unsigned long long int arr_14 [11] ;
unsigned long long int arr_15 [11] ;
unsigned long long int arr_17 [11] ;
unsigned long long int arr_19 [11] ;
unsigned long long int arr_20 [11] [11] [11] ;
unsigned long long int arr_21 [11] [11] ;
unsigned long long int arr_22 [11] [11] ;
unsigned long long int arr_38 [11] [11] ;
unsigned long long int arr_40 [11] [11] [11] ;
unsigned long long int arr_42 [11] [11] [11] ;
unsigned long long int arr_45 [11] ;
unsigned long long int arr_48 [11] [11] [11] ;
unsigned long long int arr_13 [21] [21] [21] [21] ;
unsigned long long int arr_29 [11] [11] [11] [11] ;
unsigned long long int arr_33 [11] [11] [11] [11] [11] [11] [11] ;
unsigned long long int arr_34 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 7147574657252895900ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 11627654674295115190ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3578798953610948887ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 2295706681216872478ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 9933552574714470084ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 12003115712831516051ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 8407741598892200934ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 1691572456840011325ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 17167813150242084737ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 14123631790007328427ULL : 18098551148555875919ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 3646063437737958521ULL : 13448949193190219876ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 10771426728141244867ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 6460663318639576719ULL : 3219457612796771092ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 13304388341058859221ULL : 11581296383711322331ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 11680105359237007045ULL : 9608692084208107579ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_22 [i_0] [i_1] = 821671893481229031ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_38 [i_0] [i_1] = 6096777042793334198ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = 1614443429427963683ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 17099799678819441722ULL : 832877299255232145ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_45 [i_0] = 12526308577342272628ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = 96291917079254666ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 7021775689318778311ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 5739437480611245982ULL : 5096873753722812705ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 15470537137731154503ULL : 420318883781815708ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14632588020458169102ULL : 9367043861107097684ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
