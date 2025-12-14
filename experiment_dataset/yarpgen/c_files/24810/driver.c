#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13070634224160349921ULL;
unsigned int var_1 = 1297683722U;
unsigned long long int var_2 = 8106624281201479024ULL;
long long int var_5 = -5133462374749646388LL;
unsigned long long int var_8 = 7970250507087410593ULL;
unsigned char var_9 = (unsigned char)27;
unsigned int var_12 = 9573056U;
unsigned int var_13 = 2743819141U;
unsigned int var_14 = 823860142U;
unsigned short var_16 = (unsigned short)17343;
int zero = 0;
unsigned int var_18 = 301198027U;
unsigned char var_19 = (unsigned char)119;
long long int var_20 = -8954095791446933583LL;
unsigned int var_21 = 2740405896U;
unsigned int var_22 = 372554919U;
unsigned char var_23 = (unsigned char)35;
unsigned int var_24 = 386064791U;
short arr_3 [15] [15] ;
unsigned long long int arr_8 [15] [15] [15] [15] ;
unsigned int arr_11 [15] [15] [15] [15] ;
unsigned int arr_9 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-23964;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 5135529168272241329ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 431144648U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 4065510272U : 1398754876U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
