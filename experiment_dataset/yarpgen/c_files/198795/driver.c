#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2026259039487353901LL;
long long int var_6 = 3610578577040322373LL;
signed char var_10 = (signed char)52;
long long int var_14 = 5382312926670129024LL;
int zero = 0;
signed char var_15 = (signed char)-55;
signed char var_16 = (signed char)10;
unsigned char var_17 = (unsigned char)213;
unsigned short var_18 = (unsigned short)56032;
signed char var_19 = (signed char)56;
unsigned short arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)18803;
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
