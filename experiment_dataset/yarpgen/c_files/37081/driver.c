#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 901631910615417306ULL;
unsigned int var_1 = 444618650U;
signed char var_3 = (signed char)116;
unsigned int var_4 = 4232646395U;
unsigned long long int var_5 = 230704435807439742ULL;
unsigned int var_7 = 4238677836U;
unsigned int var_9 = 583361458U;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-28;
int zero = 0;
unsigned int var_12 = 264444274U;
signed char var_13 = (signed char)-18;
_Bool var_14 = (_Bool)1;
long long int var_15 = -9114176050139311825LL;
long long int var_16 = 8244293141542676584LL;
long long int var_17 = -4536643878399693921LL;
unsigned int var_18 = 3894808949U;
unsigned int arr_0 [13] [13] ;
_Bool arr_1 [13] [13] ;
int arr_2 [13] ;
signed char arr_5 [25] ;
unsigned int arr_6 [25] ;
unsigned int arr_7 [25] ;
unsigned long long int arr_8 [15] ;
int arr_3 [13] [13] ;
unsigned long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 2281642505U : 3210240813U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -152112473;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-29 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 3179199852U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2899785374U : 2122061612U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 3698721281789177194ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -1702567987 : -749061625;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 5432274280263516108ULL : 10189876130060988078ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
