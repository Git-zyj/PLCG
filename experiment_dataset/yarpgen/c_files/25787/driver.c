#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42994;
unsigned long long int var_3 = 7164044660654602521ULL;
unsigned short var_4 = (unsigned short)50873;
unsigned long long int var_5 = 4710569300043975784ULL;
unsigned long long int var_6 = 9740984715230313266ULL;
unsigned long long int var_8 = 9204250467475043468ULL;
unsigned long long int var_9 = 15916455794129138235ULL;
unsigned long long int var_10 = 574944896549909012ULL;
int zero = 0;
unsigned long long int var_12 = 6140597146967697169ULL;
unsigned long long int var_13 = 6749970150191337342ULL;
unsigned long long int var_14 = 3986699993394138354ULL;
unsigned long long int var_15 = 10340866636985641827ULL;
unsigned long long int var_16 = 8218816524792976156ULL;
unsigned short var_17 = (unsigned short)50331;
unsigned short var_18 = (unsigned short)3105;
unsigned short var_19 = (unsigned short)62743;
unsigned long long int var_20 = 3690341484436099065ULL;
unsigned short arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned long long int arr_3 [21] ;
unsigned long long int arr_9 [21] ;
unsigned short arr_10 [21] [21] ;
unsigned long long int arr_12 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)18761;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)43270;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 426154667897408666ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 4411465331721617604ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)58123 : (unsigned short)19125;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 11931996236431919317ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
