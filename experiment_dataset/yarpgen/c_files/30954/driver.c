#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9252;
signed char var_5 = (signed char)-37;
int var_11 = -744666714;
unsigned long long int var_12 = 7274148467344488254ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)240;
unsigned short var_15 = (unsigned short)34440;
unsigned long long int var_16 = 14994004827884707346ULL;
unsigned long long int var_17 = 8071016977890068052ULL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)169;
unsigned short arr_0 [17] ;
unsigned long long int arr_4 [17] [17] ;
unsigned int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)39847;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 7725354168139328219ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 1516038044U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
