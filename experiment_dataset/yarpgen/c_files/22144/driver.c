#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13762558239282783422ULL;
int var_6 = 1826161486;
int var_7 = -52641464;
unsigned long long int var_8 = 9668143455833413604ULL;
unsigned long long int var_11 = 16050964510893195641ULL;
unsigned long long int var_16 = 6158327727123033908ULL;
int zero = 0;
int var_18 = -1977429044;
unsigned long long int var_19 = 17533192230256781762ULL;
unsigned int var_20 = 125315039U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)23263;
unsigned char var_23 = (unsigned char)35;
unsigned long long int arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3364998416033125166ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
