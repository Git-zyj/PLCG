#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2618070921858017023ULL;
unsigned long long int var_5 = 12585982016709709696ULL;
short var_6 = (short)18213;
unsigned char var_7 = (unsigned char)54;
unsigned char var_9 = (unsigned char)75;
unsigned char var_11 = (unsigned char)42;
signed char var_14 = (signed char)-126;
unsigned char var_15 = (unsigned char)138;
int zero = 0;
unsigned short var_16 = (unsigned short)60075;
short var_17 = (short)-1580;
unsigned long long int var_18 = 15615827751281376413ULL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)190;
unsigned short var_21 = (unsigned short)61024;
int var_22 = 560368138;
unsigned long long int arr_2 [19] [19] ;
long long int arr_3 [19] ;
long long int arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 12591122222127209263ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 781473405081307614LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -8882078227430106000LL : -45398687806976232LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
