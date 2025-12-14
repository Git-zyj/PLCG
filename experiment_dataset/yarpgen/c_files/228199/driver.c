#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1316171476393981509LL;
unsigned int var_1 = 3280537821U;
long long int var_2 = 896019166368361278LL;
long long int var_3 = -2235446686901608958LL;
unsigned long long int var_5 = 11037362057894377195ULL;
unsigned long long int var_6 = 16911713061138050865ULL;
unsigned long long int var_7 = 9919457719391090211ULL;
unsigned long long int var_9 = 16609520510187760845ULL;
unsigned char var_17 = (unsigned char)198;
int zero = 0;
long long int var_18 = -2078470078444921606LL;
long long int var_19 = -5394623486307766559LL;
unsigned long long int var_20 = 15546160280972556844ULL;
unsigned char var_21 = (unsigned char)93;
long long int var_22 = 434573313141228508LL;
unsigned char var_23 = (unsigned char)165;
_Bool arr_1 [24] ;
unsigned long long int arr_3 [24] ;
unsigned long long int arr_4 [24] [24] [24] ;
unsigned long long int arr_7 [24] ;
unsigned long long int arr_8 [24] [24] [24] ;
unsigned long long int arr_10 [24] [24] [24] [24] [24] ;
unsigned char arr_12 [24] [24] [24] [24] [24] [24] [24] ;
_Bool arr_15 [24] ;
unsigned int arr_18 [24] ;
long long int arr_2 [24] [24] ;
unsigned long long int arr_5 [24] [24] ;
unsigned int arr_14 [24] [24] [24] [24] [24] ;
unsigned char arr_17 [24] [24] [24] ;
unsigned long long int arr_21 [24] ;
unsigned int arr_22 [24] ;
int arr_23 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 9370300396558909842ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 7507052485281356303ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 15781669394247286807ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6681612704232525728ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 6561391875383585420ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = 2842376400U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 957343237305765483LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 5288011196139787493ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 3001400929U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)231 : (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = 14650503051999966509ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_22 [i_0] = 2525215098U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = 1522418983;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
