#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)184;
long long int var_3 = -845250441700744543LL;
unsigned char var_6 = (unsigned char)112;
long long int var_8 = 5203330842387767486LL;
long long int var_11 = -3485033711330328590LL;
int zero = 0;
unsigned char var_13 = (unsigned char)175;
unsigned char var_14 = (unsigned char)220;
long long int var_15 = -9078588757366549808LL;
long long int var_16 = -8808255059319563291LL;
long long int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = -1805552988619395624LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
