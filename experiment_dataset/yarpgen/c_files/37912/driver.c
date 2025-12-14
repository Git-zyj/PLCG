#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
int var_2 = -680312700;
unsigned long long int var_3 = 2031386319053588512ULL;
int var_6 = 623766211;
unsigned char var_7 = (unsigned char)163;
unsigned long long int var_8 = 2681088702011099388ULL;
long long int var_9 = -7580786837314772027LL;
unsigned char var_10 = (unsigned char)138;
unsigned char var_11 = (unsigned char)174;
unsigned char var_12 = (unsigned char)85;
unsigned char var_13 = (unsigned char)44;
unsigned long long int var_14 = 9265043613619026825ULL;
unsigned long long int var_16 = 16869243046246366453ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)117;
unsigned long long int var_18 = 13115110590749919152ULL;
unsigned char var_19 = (unsigned char)103;
unsigned char var_20 = (unsigned char)186;
unsigned char var_21 = (unsigned char)165;
long long int arr_6 [20] ;
unsigned long long int arr_7 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 6863319466807787492LL : 5300190147510686957LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 12311185163910891027ULL : 6044870925152531984ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
