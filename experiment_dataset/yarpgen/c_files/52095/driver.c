#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16911769974975311144ULL;
unsigned char var_1 = (unsigned char)90;
long long int var_4 = 3584861366902571819LL;
unsigned char var_6 = (unsigned char)16;
unsigned char var_8 = (unsigned char)26;
unsigned char var_9 = (unsigned char)117;
int var_10 = -233939393;
long long int var_12 = -513981066441167300LL;
long long int var_13 = 674378231921964577LL;
int zero = 0;
unsigned char var_16 = (unsigned char)206;
long long int var_17 = -2172325199137739727LL;
signed char var_18 = (signed char)-38;
unsigned long long int var_19 = 10057661206824089428ULL;
long long int var_20 = -3270314009528700100LL;
signed char arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-124;
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
