#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)39;
unsigned char var_7 = (unsigned char)139;
long long int var_8 = -5703389021870715889LL;
signed char var_12 = (signed char)-74;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = -257642370;
unsigned long long int var_15 = 13399479794588760467ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 8131928117429285030LL;
unsigned char arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned char arr_2 [21] ;
unsigned long long int arr_3 [21] [21] [21] ;
int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2988123536649268716ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 186736110005635917ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = -1166015225;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
