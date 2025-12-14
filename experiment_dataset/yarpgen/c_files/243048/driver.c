#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9316903836306642458ULL;
unsigned long long int var_5 = 5226364276660856892ULL;
signed char var_6 = (signed char)-48;
unsigned char var_10 = (unsigned char)193;
unsigned long long int var_11 = 13198161931737573611ULL;
int zero = 0;
unsigned long long int var_14 = 10256730715061100352ULL;
signed char var_15 = (signed char)10;
unsigned long long int var_16 = 4346770566765761615ULL;
unsigned char var_17 = (unsigned char)35;
signed char var_18 = (signed char)-27;
unsigned short var_19 = (unsigned short)31367;
unsigned char var_20 = (unsigned char)228;
unsigned char arr_0 [18] ;
unsigned char arr_1 [18] ;
unsigned short arr_9 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)52249 : (unsigned short)37962;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
