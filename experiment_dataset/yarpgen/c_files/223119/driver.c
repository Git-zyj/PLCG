#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5323807448790070911LL;
long long int var_3 = -4994599929369068098LL;
unsigned char var_4 = (unsigned char)203;
unsigned char var_6 = (unsigned char)217;
long long int var_10 = 7284026694405201300LL;
int zero = 0;
unsigned long long int var_11 = 5692657038565328004ULL;
unsigned long long int var_12 = 10782304233718610709ULL;
unsigned char var_13 = (unsigned char)66;
long long int var_14 = -6747450025688270971LL;
long long int var_15 = 1136439601020975660LL;
unsigned char var_16 = (unsigned char)191;
long long int var_17 = -8251846772860008025LL;
long long int arr_1 [22] ;
unsigned long long int arr_2 [22] [22] [22] ;
long long int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3737015287483899819LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1226823051622226263ULL : 8677627482755850200ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -7495295242321777614LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
