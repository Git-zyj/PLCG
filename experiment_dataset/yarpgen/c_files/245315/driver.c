#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5855136410642089873ULL;
long long int var_1 = 492289666317196836LL;
long long int var_2 = 4312290885264681604LL;
unsigned long long int var_3 = 10757625050427053488ULL;
unsigned long long int var_4 = 9814806008171804806ULL;
unsigned long long int var_5 = 14014696786991010445ULL;
unsigned char var_6 = (unsigned char)25;
unsigned long long int var_7 = 13854131705606552817ULL;
unsigned char var_9 = (unsigned char)226;
unsigned char var_10 = (unsigned char)244;
long long int var_12 = 2636173359758370423LL;
int zero = 0;
unsigned char var_13 = (unsigned char)27;
unsigned long long int var_14 = 14358846304881286485ULL;
unsigned char var_15 = (unsigned char)38;
long long int var_16 = 1824966527898461066LL;
unsigned char var_17 = (unsigned char)237;
unsigned char var_18 = (unsigned char)44;
unsigned char var_19 = (unsigned char)73;
unsigned long long int var_20 = 8111706456426258791ULL;
unsigned char var_21 = (unsigned char)74;
unsigned char var_22 = (unsigned char)43;
unsigned char var_23 = (unsigned char)247;
unsigned long long int var_24 = 11212877706740388647ULL;
unsigned long long int var_25 = 1282235676058613863ULL;
unsigned long long int var_26 = 14822813494236147009ULL;
unsigned long long int var_27 = 3776271871587538199ULL;
long long int var_28 = 4889637031155724420LL;
unsigned char var_29 = (unsigned char)11;
unsigned long long int var_30 = 9856674085832172438ULL;
unsigned long long int var_31 = 12091870684080169960ULL;
unsigned char var_32 = (unsigned char)244;
unsigned char var_33 = (unsigned char)43;
unsigned long long int var_34 = 13424908258171893830ULL;
unsigned char var_35 = (unsigned char)216;
long long int var_36 = 513107718398103069LL;
unsigned char arr_0 [20] ;
unsigned long long int arr_3 [20] [20] [20] ;
unsigned long long int arr_4 [20] [20] [20] ;
unsigned char arr_5 [20] [20] [20] ;
unsigned long long int arr_6 [20] [20] ;
long long int arr_9 [20] [20] [20] [20] ;
unsigned char arr_10 [20] [20] [20] [20] ;
unsigned long long int arr_11 [19] ;
unsigned long long int arr_12 [19] ;
unsigned char arr_16 [19] [19] [19] ;
long long int arr_18 [19] ;
unsigned long long int arr_20 [19] [19] ;
long long int arr_24 [19] [19] ;
unsigned char arr_26 [19] ;
unsigned long long int arr_27 [19] ;
unsigned char arr_30 [19] [19] [19] ;
unsigned char arr_31 [19] [19] ;
unsigned char arr_38 [19] [19] ;
long long int arr_41 [19] [19] [19] [19] ;
unsigned long long int arr_2 [20] ;
long long int arr_22 [19] [19] ;
unsigned long long int arr_23 [19] [19] ;
unsigned char arr_28 [19] ;
long long int arr_36 [19] [19] [19] [19] [19] ;
unsigned char arr_42 [19] [19] [19] [19] ;
unsigned long long int arr_46 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 9560085015777185129ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 15069405381013423475ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 17118556279698976710ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -420711972017331749LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 14935646281046834468ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 16631785117467734713ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 1635255742577801314LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = 14093445050201500610ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = 3781057877773415651LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = 3371879311371376056ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = -5690286992480565050LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 12549643119216643820ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = 7929451367452307337LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_23 [i_0] [i_1] = 7545245311778760118ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = 4553967015645963233LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_46 [i_0] = 13867815736572917927ULL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_46 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
