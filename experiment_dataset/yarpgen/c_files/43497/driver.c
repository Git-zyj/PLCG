#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26808;
long long int var_3 = -5276504523751718722LL;
unsigned short var_11 = (unsigned short)21655;
int zero = 0;
unsigned char var_15 = (unsigned char)242;
short var_16 = (short)-1772;
unsigned char var_17 = (unsigned char)202;
long long int var_18 = 405795330675994111LL;
signed char var_19 = (signed char)-87;
unsigned long long int arr_0 [12] [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 4788419883386533321ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 6617818442273431222LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
