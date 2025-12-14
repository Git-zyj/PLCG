#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21174;
unsigned long long int var_3 = 9981654357567974431ULL;
unsigned long long int var_4 = 7649676531592871316ULL;
short var_6 = (short)7647;
short var_7 = (short)9003;
unsigned long long int var_8 = 4327136531865197840ULL;
unsigned long long int var_9 = 9495772352931836678ULL;
short var_10 = (short)-27290;
short var_11 = (short)21827;
unsigned char var_12 = (unsigned char)215;
unsigned long long int var_13 = 7048646901744223545ULL;
int zero = 0;
unsigned long long int var_14 = 14818222906786589339ULL;
unsigned char var_15 = (unsigned char)77;
unsigned long long int var_16 = 1107219327037897134ULL;
unsigned char var_17 = (unsigned char)208;
short var_18 = (short)26171;
unsigned long long int var_19 = 8440849822265354674ULL;
short var_20 = (short)-27295;
unsigned char var_21 = (unsigned char)29;
short var_22 = (short)-23817;
unsigned long long int var_23 = 18392972731789369104ULL;
short var_24 = (short)-22994;
unsigned char var_25 = (unsigned char)180;
short var_26 = (short)-17882;
unsigned char var_27 = (unsigned char)13;
unsigned long long int var_28 = 277156146640362689ULL;
unsigned char var_29 = (unsigned char)233;
unsigned long long int arr_0 [16] [16] ;
short arr_1 [16] ;
unsigned char arr_2 [16] ;
unsigned long long int arr_3 [16] ;
unsigned long long int arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 14207424751908675296ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)14190;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 9056938798856944662ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 738535022973055651ULL : 1331920799115993896ULL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
