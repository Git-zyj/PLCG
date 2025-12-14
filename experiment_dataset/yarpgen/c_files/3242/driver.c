#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5598;
unsigned long long int var_1 = 13529647725370751976ULL;
short var_2 = (short)-8624;
int var_3 = -1971728345;
unsigned long long int var_4 = 4719759423692470298ULL;
long long int var_5 = 7217899143194856999LL;
int var_6 = -1308620966;
unsigned char var_7 = (unsigned char)63;
unsigned int var_8 = 2082435248U;
unsigned char var_9 = (unsigned char)226;
int var_11 = 1321655264;
long long int var_12 = 9135153054492791103LL;
signed char var_13 = (signed char)-117;
int zero = 0;
unsigned char var_14 = (unsigned char)19;
long long int var_15 = -9187715378315496934LL;
short var_16 = (short)-27067;
short var_17 = (short)26047;
short var_18 = (short)-29634;
int arr_0 [20] ;
short arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 718913797;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)1625;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
