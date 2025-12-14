#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1392885282548699293LL;
signed char var_1 = (signed char)47;
signed char var_2 = (signed char)39;
long long int var_3 = 6823970848257397380LL;
unsigned long long int var_6 = 7581957258691554160ULL;
unsigned short var_7 = (unsigned short)49154;
int var_12 = -1438384180;
unsigned long long int var_16 = 10944285480365291552ULL;
int zero = 0;
signed char var_18 = (signed char)-84;
int var_19 = 1825407356;
long long int var_20 = 9168747257079154449LL;
long long int var_21 = -5854095127028160148LL;
unsigned long long int var_22 = 7286935380268671931ULL;
signed char var_23 = (signed char)-54;
unsigned long long int arr_0 [16] [16] ;
unsigned long long int arr_2 [16] [16] ;
signed char arr_6 [16] [16] [16] [16] ;
long long int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 15548698506718842226ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 13935304543516998625ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-29 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 2521337790038173444LL;
}

void checksum() {
    hash(&seed, var_18);
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
