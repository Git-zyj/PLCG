#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5794634541612196135ULL;
unsigned long long int var_7 = 5517650768111215911ULL;
unsigned long long int var_11 = 14359089772027957734ULL;
unsigned long long int var_12 = 798810706891824180ULL;
unsigned long long int var_13 = 925787092869889917ULL;
int zero = 0;
unsigned long long int var_14 = 3030191394979033871ULL;
unsigned long long int var_15 = 16273307811074789497ULL;
unsigned long long int var_16 = 3711458448976533190ULL;
unsigned long long int var_17 = 16883786033982586023ULL;
unsigned long long int var_18 = 2289703847499924583ULL;
unsigned long long int arr_0 [25] ;
unsigned long long int arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 5590470252774614932ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 17714006323721497229ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
