#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13065;
int var_1 = -137469474;
unsigned long long int var_5 = 10931235237010705426ULL;
unsigned short var_6 = (unsigned short)46577;
signed char var_9 = (signed char)-67;
int zero = 0;
unsigned short var_20 = (unsigned short)40154;
int var_21 = -169486228;
int var_22 = 888641751;
short var_23 = (short)-21116;
unsigned long long int var_24 = 6316654608971398626ULL;
int var_25 = 551153401;
unsigned long long int arr_0 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 12062395731628555266ULL : 17022224806753221108ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
