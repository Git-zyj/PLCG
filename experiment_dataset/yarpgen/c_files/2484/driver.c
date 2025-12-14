#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26683;
signed char var_4 = (signed char)112;
unsigned short var_5 = (unsigned short)60638;
unsigned long long int var_6 = 9001632538456684013ULL;
int zero = 0;
long long int var_11 = -5323619549441700480LL;
unsigned long long int var_12 = 15145073437705294704ULL;
unsigned int var_13 = 411625730U;
unsigned char var_14 = (unsigned char)183;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 17333050606028795694ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
