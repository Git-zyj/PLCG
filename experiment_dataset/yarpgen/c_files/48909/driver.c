#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17090249300701648980ULL;
long long int var_1 = -635315978665348776LL;
unsigned long long int var_2 = 15334402968556735875ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)10;
int var_6 = 232745896;
unsigned char var_7 = (unsigned char)129;
int var_8 = -1811867109;
unsigned int var_9 = 1732571687U;
signed char var_10 = (signed char)-54;
unsigned int var_12 = 3157796625U;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 2999613812020932304LL;
short var_15 = (short)-12405;
int var_16 = 1552491293;
unsigned long long int var_17 = 8123380158289675917ULL;
signed char var_18 = (signed char)50;
int var_19 = -1162392251;
unsigned char var_20 = (unsigned char)123;
unsigned long long int arr_3 [17] ;
signed char arr_7 [17] [17] [17] [17] ;
long long int arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 6495239009651431987ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = -9085503071728665420LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
