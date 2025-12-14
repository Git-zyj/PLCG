#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10167314595744788108ULL;
int var_5 = -1810441126;
short var_9 = (short)-1198;
int zero = 0;
unsigned char var_16 = (unsigned char)218;
unsigned long long int var_17 = 12933194273174133769ULL;
signed char var_18 = (signed char)65;
signed char var_19 = (signed char)-45;
unsigned long long int var_20 = 206703929534473105ULL;
signed char arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-21;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
