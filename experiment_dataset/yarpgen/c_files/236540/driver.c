#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10543573615009005906ULL;
unsigned long long int var_1 = 17580369114974817431ULL;
unsigned long long int var_3 = 11170610371780610423ULL;
unsigned long long int var_6 = 7287976293916470678ULL;
unsigned long long int var_8 = 14334546757169551120ULL;
unsigned long long int var_11 = 13665718194474698428ULL;
int zero = 0;
unsigned long long int var_14 = 5954041207270510288ULL;
unsigned long long int var_15 = 15337210945365312584ULL;
unsigned long long int var_16 = 17824386957435626327ULL;
unsigned long long int var_17 = 7905440310216738877ULL;
unsigned long long int var_18 = 17812783561753685580ULL;
unsigned long long int var_19 = 9918325716978851161ULL;
unsigned long long int var_20 = 6860758664102576888ULL;
unsigned long long int var_21 = 2049394063200946684ULL;
unsigned long long int var_22 = 3618248406066028101ULL;
unsigned long long int arr_1 [11] ;
unsigned long long int arr_2 [11] ;
unsigned long long int arr_3 [11] ;
unsigned long long int arr_7 [21] [21] ;
unsigned long long int arr_4 [11] [11] ;
unsigned long long int arr_5 [11] [11] ;
unsigned long long int arr_8 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1239146622429096271ULL : 1519379898346817005ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 9036006761711666699ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 2671862700447154370ULL : 6480061792243411155ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 17743554697334439117ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 3087560628337720904ULL : 17935317847984577285ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 13596323753145690935ULL : 11554475284644826550ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 18068200310191793393ULL : 12476264464705984427ULL;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
