#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
unsigned char var_2 = (unsigned char)215;
long long int var_5 = 2633751387389672744LL;
int var_6 = -1161012762;
signed char var_9 = (signed char)81;
int var_12 = 2070598905;
int zero = 0;
int var_14 = 2026218864;
unsigned int var_15 = 3550531697U;
signed char var_16 = (signed char)-93;
long long int var_17 = -6071988662571198702LL;
signed char var_18 = (signed char)-34;
unsigned char var_19 = (unsigned char)219;
signed char arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)93;
}

void checksum() {
    hash(&seed, var_14);
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
