#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -570531253;
int var_1 = -1641007983;
unsigned long long int var_2 = 12306421079706499039ULL;
unsigned short var_3 = (unsigned short)38621;
short var_4 = (short)-9832;
unsigned long long int var_9 = 8495185351003998175ULL;
unsigned long long int var_10 = 4025604264402754805ULL;
unsigned long long int var_11 = 9888375996816549377ULL;
int zero = 0;
signed char var_13 = (signed char)99;
unsigned long long int var_14 = 12556096095140703305ULL;
int var_15 = 209567071;
unsigned short var_16 = (unsigned short)2362;
unsigned short var_17 = (unsigned short)32789;
unsigned long long int var_18 = 1806961340802059601ULL;
int var_19 = 1795239692;
short var_20 = (short)18286;
long long int arr_0 [19] ;
long long int arr_2 [19] [19] ;
int arr_4 [19] [19] [19] ;
long long int arr_5 [19] [19] ;
short arr_6 [19] [19] [19] [19] ;
unsigned long long int arr_7 [19] ;
short arr_8 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -5136144126698360395LL : -5597575554218716544LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 8890369637489759712LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1535302058 : 85992760;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 5290189808349813458LL : -539362488037828749LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)18913;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8858367025921747224ULL : 1036574662512951355ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)21837 : (short)-29768;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
