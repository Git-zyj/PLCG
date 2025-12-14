#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12636912209100658527ULL;
unsigned short var_4 = (unsigned short)46987;
int var_5 = -1315915728;
int var_7 = -1345996713;
unsigned short var_9 = (unsigned short)1842;
int zero = 0;
long long int var_18 = 5303977586487096083LL;
unsigned long long int var_19 = 12799767481360290336ULL;
int var_20 = -87720151;
unsigned char var_21 = (unsigned char)21;
long long int var_22 = -1421965104167174484LL;
unsigned int arr_0 [21] ;
unsigned char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 2109891427U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)83;
}

void checksum() {
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
