#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)150;
int var_5 = -405013787;
unsigned int var_7 = 2015774711U;
signed char var_10 = (signed char)-66;
short var_11 = (short)-2172;
int zero = 0;
signed char var_13 = (signed char)-1;
long long int var_14 = 8381770960265368439LL;
unsigned long long int var_15 = 8814595346473981885ULL;
_Bool var_16 = (_Bool)0;
unsigned short arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)37471;
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
