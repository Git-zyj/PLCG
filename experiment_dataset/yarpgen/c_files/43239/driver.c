#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7291989127221451563LL;
long long int var_5 = 3757996177241456584LL;
_Bool var_6 = (_Bool)0;
int var_7 = -1014043663;
int var_9 = 289437255;
unsigned long long int var_10 = 3770231447911650956ULL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)40;
int zero = 0;
long long int var_16 = 5118301042799558535LL;
unsigned char var_17 = (unsigned char)66;
long long int var_18 = -8187522632580376396LL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)19;
long long int var_21 = -4585405997255459348LL;
_Bool var_22 = (_Bool)0;
long long int arr_1 [14] ;
short arr_3 [17] [17] ;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -38085076334748369LL : 704850263601461827LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (short)9698;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
