#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -166252276;
int var_4 = -1221142613;
short var_6 = (short)27629;
short var_10 = (short)27752;
unsigned long long int var_12 = 11202746809778397513ULL;
unsigned char var_14 = (unsigned char)97;
unsigned long long int var_18 = 934483606964418375ULL;
int zero = 0;
int var_19 = -335073322;
int var_20 = 495013003;
int var_21 = 1057285281;
unsigned long long int var_22 = 4659034392090535299ULL;
long long int var_23 = -4170685634825148008LL;
int arr_0 [21] [21] ;
int arr_3 [21] [21] [21] ;
signed char arr_5 [21] ;
int arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 314710104;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 611213481;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = -207044760;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
