#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6119942962614203394ULL;
short var_2 = (short)-20326;
unsigned long long int var_4 = 5277660874871157792ULL;
short var_5 = (short)5973;
short var_13 = (short)-17503;
int zero = 0;
unsigned long long int var_17 = 16596188746448086040ULL;
unsigned long long int var_18 = 14281348824535754812ULL;
unsigned long long int var_19 = 12771918594029117858ULL;
unsigned long long int var_20 = 10859394337385476707ULL;
unsigned long long int arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 17670535521616405906ULL : 7259046999256869265ULL;
}

void checksum() {
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
