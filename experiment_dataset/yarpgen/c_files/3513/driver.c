#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)203;
unsigned int var_2 = 934981017U;
signed char var_3 = (signed char)55;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
long long int var_6 = 2809735238213869299LL;
unsigned int var_9 = 1542986930U;
short var_12 = (short)-1993;
long long int var_15 = -2186226163468663665LL;
short var_16 = (short)29772;
long long int var_17 = -5395337389864490643LL;
long long int var_19 = 5439283971028685218LL;
int zero = 0;
signed char var_20 = (signed char)-6;
unsigned short var_21 = (unsigned short)56395;
int var_22 = -1263023565;
unsigned short var_23 = (unsigned short)14705;
long long int var_24 = -9080168199970047304LL;
long long int var_25 = 5266787303699344966LL;
int var_26 = 1666654743;
unsigned char arr_2 [22] [22] ;
long long int arr_3 [22] [22] [22] ;
long long int arr_8 [22] ;
short arr_11 [22] [22] [22] [22] ;
unsigned long long int arr_12 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)37 : (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5355344423970079795LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1188034555629945138LL : 1870513218241754299LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-3098 : (short)-8291;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 13916775863420707494ULL : 12924977837043831657ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
