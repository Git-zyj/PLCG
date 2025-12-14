#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5663744770460748404ULL;
unsigned long long int var_2 = 15757129078079583531ULL;
unsigned long long int var_3 = 15238859009992212536ULL;
unsigned long long int var_4 = 10747846263377904604ULL;
unsigned long long int var_12 = 8893334217964090945ULL;
int zero = 0;
unsigned long long int var_13 = 16715930564273399727ULL;
unsigned long long int var_14 = 3188373998543766204ULL;
unsigned long long int var_15 = 12485276314933446013ULL;
unsigned long long int var_16 = 9847515835751733130ULL;
unsigned long long int var_17 = 1847584749710145114ULL;
unsigned long long int var_18 = 7581402619560302870ULL;
unsigned long long int var_19 = 11329376995343893176ULL;
unsigned long long int var_20 = 31758193401800444ULL;
unsigned long long int var_21 = 4302428070605588591ULL;
unsigned long long int var_22 = 9900024829150648664ULL;
unsigned long long int var_23 = 14834176293915341331ULL;
unsigned long long int var_24 = 2315341658863824935ULL;
unsigned long long int arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_4 [16] ;
unsigned long long int arr_5 [16] [16] ;
unsigned long long int arr_6 [16] ;
unsigned long long int arr_7 [16] [16] ;
unsigned long long int arr_8 [16] [16] ;
unsigned long long int arr_12 [16] [16] [16] [16] ;
unsigned long long int arr_16 [25] ;
unsigned long long int arr_18 [25] [25] ;
unsigned long long int arr_19 [25] [25] [25] ;
unsigned long long int arr_20 [25] [25] [25] [25] ;
unsigned long long int arr_21 [25] [25] ;
unsigned long long int arr_22 [25] [25] [25] [25] ;
unsigned long long int arr_23 [25] [25] [25] [25] [25] ;
unsigned long long int arr_13 [16] ;
unsigned long long int arr_14 [16] ;
unsigned long long int arr_26 [25] ;
unsigned long long int arr_27 [25] [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_28 [25] [25] [25] [25] ;
unsigned long long int arr_29 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 5277405148830378560ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 14238261881367212413ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 10216921230669406044ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 9613810520653370648ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 1912596523663124015ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 1175428803309426321ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 3814965554877733561ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 1150625758990708967ULL : 2957313642147905703ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = 3101084770468935428ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = 11671292163793584670ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 6427274758197134326ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 14703278931232209032ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = 12729066544842507499ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 3409437933118253710ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = 2211151261727160893ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 9212607833253637946ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 11904058719294306047ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 3557110078995901907ULL : 3204943635418989988ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 12311353476277712038ULL : 15878518569171228266ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 8774261442007831379ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = 2711218017332281676ULL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
