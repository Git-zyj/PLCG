#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
signed char var_2 = (signed char)95;
int var_4 = 169334281;
unsigned short var_6 = (unsigned short)56794;
unsigned char var_7 = (unsigned char)150;
long long int var_8 = 752038467796810816LL;
unsigned char var_9 = (unsigned char)162;
int zero = 0;
unsigned short var_12 = (unsigned short)8609;
unsigned short var_13 = (unsigned short)60041;
unsigned long long int var_14 = 16963749773933726138ULL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 5415845572886518149ULL;
unsigned char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)248;
}

void checksum() {
    hash(&seed, var_12);
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
