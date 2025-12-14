#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5357517463769032457ULL;
unsigned long long int var_1 = 12854311618520745281ULL;
unsigned long long int var_2 = 2775881007364121077ULL;
unsigned long long int var_3 = 1862905595147679244ULL;
unsigned long long int var_5 = 5392299293519725097ULL;
unsigned long long int var_6 = 2500958979919059054ULL;
unsigned long long int var_7 = 5402590926531610707ULL;
unsigned long long int var_9 = 13132735725764762343ULL;
unsigned long long int var_10 = 305255012297131090ULL;
unsigned long long int var_11 = 2585254996041981615ULL;
unsigned long long int var_12 = 8773219479280641724ULL;
unsigned long long int var_13 = 461364616081621193ULL;
int zero = 0;
unsigned long long int var_14 = 390954918644698752ULL;
unsigned long long int var_15 = 15001623125311970286ULL;
unsigned long long int var_16 = 12177278935916261511ULL;
unsigned long long int var_17 = 13341230691972651659ULL;
unsigned long long int var_18 = 16535875398786535490ULL;
unsigned long long int var_19 = 5044014988609878565ULL;
unsigned long long int var_20 = 8697179981092732550ULL;
unsigned long long int var_21 = 5421169265790450994ULL;
unsigned long long int var_22 = 8014328675841798830ULL;
unsigned long long int var_23 = 6862030325117667598ULL;
unsigned long long int var_24 = 3532425544784569691ULL;
unsigned long long int arr_1 [23] ;
unsigned long long int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
unsigned long long int arr_6 [23] ;
unsigned long long int arr_8 [23] [23] [23] ;
unsigned long long int arr_11 [23] ;
unsigned long long int arr_15 [16] ;
unsigned long long int arr_16 [16] ;
unsigned long long int arr_27 [16] [16] [16] ;
unsigned long long int arr_29 [16] [16] [16] [16] [16] ;
unsigned long long int arr_4 [23] ;
unsigned long long int arr_5 [23] [23] ;
unsigned long long int arr_12 [23] ;
unsigned long long int arr_13 [23] ;
unsigned long long int arr_25 [16] [16] [16] ;
unsigned long long int arr_30 [16] [16] [16] [16] ;
unsigned long long int arr_31 [16] [16] [16] [16] [16] ;
unsigned long long int arr_32 [16] [16] [16] [16] ;
unsigned long long int arr_33 [16] [16] [16] [16] [16] [16] ;
unsigned long long int arr_34 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 7700583762556719614ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 13818165954649019338ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 14404130020792575833ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 13041974374109942446ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 8618171359985132561ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 10025433233656479796ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 18158370453810260612ULL : 4368393617254300750ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 4560164047959584266ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 6170550901176254193ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 16822397523367945853ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 12358619152657088405ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 8075274167121166516ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 646707587300967915ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 16362460422691055907ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2789828936315841926ULL : 11793217168102524890ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4234531339090040641ULL : 18398898407085084574ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1438910325721614915ULL : 9267425490947152453ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 10029540777198940874ULL : 1773003887898185985ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 6815356676013022520ULL : 8119350005223614633ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2287626157224342848ULL : 13556563340421832239ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
