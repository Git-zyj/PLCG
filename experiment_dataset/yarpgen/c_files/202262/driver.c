#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
unsigned char var_1 = (unsigned char)209;
unsigned char var_4 = (unsigned char)224;
unsigned char var_6 = (unsigned char)174;
unsigned char var_7 = (unsigned char)211;
unsigned char var_8 = (unsigned char)215;
int zero = 0;
unsigned char var_13 = (unsigned char)218;
unsigned char var_14 = (unsigned char)25;
unsigned char var_15 = (unsigned char)75;
unsigned char var_16 = (unsigned char)208;
unsigned char var_17 = (unsigned char)138;
unsigned char var_18 = (unsigned char)178;
unsigned char var_19 = (unsigned char)231;
unsigned char var_20 = (unsigned char)215;
unsigned char arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)39;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
