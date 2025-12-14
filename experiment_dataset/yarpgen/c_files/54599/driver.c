#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15958975888376713870ULL;
unsigned long long int var_1 = 8309566806800352302ULL;
int var_2 = -1072729398;
unsigned long long int var_3 = 3663252155122446060ULL;
int var_4 = 1244958205;
int var_5 = -612885603;
unsigned long long int var_6 = 6304083340096646659ULL;
unsigned long long int var_7 = 14459850477369130449ULL;
unsigned long long int var_8 = 3716640068039596144ULL;
unsigned long long int var_9 = 3053387966505522649ULL;
int var_10 = -2108625466;
int var_11 = -613247164;
int var_12 = -145120425;
int zero = 0;
int var_13 = -504291156;
unsigned long long int var_14 = 4911026335520746456ULL;
int var_15 = -38227488;
unsigned long long int var_16 = 5254552741686678931ULL;
int var_17 = -1831510883;
unsigned long long int arr_12 [25] [25] [25] ;
int arr_13 [25] [25] ;
int arr_14 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 10922069102499422036ULL : 7448374108587410405ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? -1734249848 : -1607337083;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 757037119 : -1622466932;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
