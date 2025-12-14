#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)18;
unsigned char var_9 = (unsigned char)208;
unsigned char var_10 = (unsigned char)220;
unsigned long long int var_11 = 2804443641547411952ULL;
unsigned long long int var_13 = 985921050724444754ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)52;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 13136917054482772430ULL;
unsigned long long int var_17 = 1185435280380659295ULL;
unsigned char arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)105 : (unsigned char)125;
}

void checksum() {
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
