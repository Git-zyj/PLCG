#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)126;
signed char var_1 = (signed char)25;
long long int var_2 = -6263805403208637135LL;
long long int var_3 = 8634128454722271479LL;
signed char var_4 = (signed char)-17;
signed char var_5 = (signed char)-29;
long long int var_6 = -6853945535947193274LL;
signed char var_7 = (signed char)119;
signed char var_8 = (signed char)-29;
signed char var_9 = (signed char)55;
int zero = 0;
long long int var_10 = -6558977209860087859LL;
long long int var_11 = -7497679427818634106LL;
signed char var_12 = (signed char)-10;
signed char var_13 = (signed char)30;
signed char var_14 = (signed char)-122;
signed char var_15 = (signed char)13;
signed char var_16 = (signed char)-81;
signed char var_17 = (signed char)124;
signed char var_18 = (signed char)-26;
signed char var_19 = (signed char)62;
signed char var_20 = (signed char)42;
long long int var_21 = 892766631790171038LL;
long long int var_22 = -5697971073167731349LL;
signed char var_23 = (signed char)-122;
signed char var_24 = (signed char)115;
signed char var_25 = (signed char)26;
signed char var_26 = (signed char)-3;
long long int var_27 = 5888780107646104848LL;
signed char var_28 = (signed char)-1;
long long int var_29 = 4699298083064667308LL;
long long int arr_0 [10] [10] ;
long long int arr_1 [10] [10] ;
signed char arr_2 [20] [20] ;
signed char arr_3 [20] ;
signed char arr_4 [20] ;
long long int arr_7 [20] [20] [20] ;
signed char arr_8 [20] ;
signed char arr_9 [20] [20] [20] ;
long long int arr_10 [20] ;
long long int arr_11 [20] [20] ;
long long int arr_12 [20] [20] ;
long long int arr_13 [20] [20] ;
long long int arr_14 [20] [20] ;
signed char arr_15 [20] ;
signed char arr_21 [20] [20] ;
long long int arr_16 [20] ;
signed char arr_17 [20] [20] ;
signed char arr_18 [20] ;
signed char arr_23 [20] ;
signed char arr_24 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 8047358089172047216LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 166019761912535879LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 4149505535871981916LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -7096076909629601213LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = -183969997780425559LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = -3582586414712506856LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = -1314000528900672956LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = -421573818898490715LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = 2699528156955970016LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (signed char)-127;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
