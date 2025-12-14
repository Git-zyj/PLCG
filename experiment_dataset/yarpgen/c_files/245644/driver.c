#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18268;
int var_1 = 1281346331;
unsigned long long int var_2 = 16586949627256477071ULL;
int var_3 = 40226016;
unsigned short var_4 = (unsigned short)37631;
short var_5 = (short)4438;
signed char var_6 = (signed char)-72;
unsigned short var_7 = (unsigned short)61332;
signed char var_8 = (signed char)-70;
unsigned char var_9 = (unsigned char)237;
int zero = 0;
unsigned long long int var_10 = 5804852069591454174ULL;
unsigned short var_11 = (unsigned short)16485;
unsigned long long int var_12 = 1569484147282684949ULL;
unsigned long long int var_13 = 16835421474146884234ULL;
signed char var_14 = (signed char)-85;
unsigned long long int var_15 = 15808671562890067216ULL;
short var_16 = (short)-24728;
unsigned long long int arr_0 [17] ;
unsigned long long int arr_1 [17] [17] ;
short arr_2 [17] ;
unsigned long long int arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 4990024931289605845ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 10007165280667403953ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)-21188;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 11157500647667316613ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
