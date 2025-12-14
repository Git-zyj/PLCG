#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7906525444276173680LL;
long long int var_1 = -1904060100226640375LL;
long long int var_5 = -2763146999789815001LL;
long long int var_8 = -5240992319865824222LL;
long long int var_9 = -221954244377363442LL;
long long int var_14 = 156630898720199498LL;
long long int var_15 = -6368996408154168235LL;
long long int var_16 = -2233582929112789124LL;
long long int var_17 = 6766105394945253148LL;
int zero = 0;
long long int var_18 = -4053962787587107182LL;
long long int var_19 = 257002224978861861LL;
long long int var_20 = -6912469475615929307LL;
long long int var_21 = 5440622986609035262LL;
long long int var_22 = -8412472369428730697LL;
long long int var_23 = -8669616532944135540LL;
long long int var_24 = 5874917225554234009LL;
long long int var_25 = 3992917668462113060LL;
long long int var_26 = 226301822020203121LL;
long long int var_27 = 4220281959333032398LL;
long long int var_28 = -780153819174822504LL;
long long int var_29 = 7107529250212045868LL;
long long int var_30 = 2755723843862247140LL;
long long int var_31 = -1006654519499424967LL;
long long int var_32 = 5384828716151481510LL;
long long int var_33 = -4952945412029218013LL;
long long int arr_0 [19] ;
long long int arr_1 [19] ;
long long int arr_3 [19] ;
long long int arr_4 [19] [19] [19] ;
long long int arr_5 [19] ;
long long int arr_9 [14] ;
long long int arr_11 [14] [14] ;
long long int arr_13 [14] [14] [14] ;
long long int arr_14 [14] [14] [14] [14] ;
long long int arr_15 [14] [14] [14] [14] [14] ;
long long int arr_16 [14] [14] [14] [14] ;
long long int arr_18 [14] [14] [14] ;
long long int arr_19 [14] [14] [14] [14] [14] ;
long long int arr_21 [14] [14] [14] [14] [14] [14] [14] ;
long long int arr_25 [14] [14] [14] [14] [14] [14] ;
long long int arr_28 [14] [14] [14] [14] [14] [14] ;
long long int arr_6 [19] [19] ;
long long int arr_20 [14] [14] [14] [14] [14] [14] [14] ;
long long int arr_23 [14] [14] [14] [14] [14] [14] ;
long long int arr_27 [14] ;
long long int arr_31 [14] [14] [14] [14] ;
long long int arr_34 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -5769553937340081731LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -6272847523458860357LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 3600445125248277358LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6890298850331775397LL : -1354722607320818539LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 4985557209202720848LL : 8553497894773314800LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 7486514629471234421LL : 1203149919711531035LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 2764755086700020504LL : 8351592764589495957LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -1179992664725926717LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -7333609746809194606LL : -2197979247307488968LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -6724139967028169278LL : 4425910847599062344LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 2588447732088024983LL : -4338505441595346723LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2727751261680533883LL : 6217180490645121859LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = -5412864500889114999LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 2717389434110802296LL : 8751086907692863344LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 9024466703214872376LL : 5541316128818540433LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3708146037579968090LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 8357285359619969739LL : -3952691908224056161LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? -5524874746469513640LL : 2655871222583095320LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? -7978507666345904724LL : 1799002844400092814LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 5875207084621920073LL : 4617492323943679965LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 6846498780910854865LL : -3306925431606924350LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_34 [i_0] [i_1] = (i_1 % 2 == 0) ? 9001178537791803902LL : -7900199310448630405LL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
