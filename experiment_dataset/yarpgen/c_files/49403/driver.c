#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1044481703;
long long int var_3 = 3021272639095761436LL;
unsigned short var_4 = (unsigned short)27245;
short var_6 = (short)17473;
unsigned long long int var_8 = 4749241240072414058ULL;
unsigned short var_9 = (unsigned short)55943;
unsigned short var_10 = (unsigned short)3667;
long long int var_12 = 6793072394426456747LL;
int var_13 = -2053483622;
unsigned char var_17 = (unsigned char)3;
int zero = 0;
int var_19 = -1599494536;
unsigned short var_20 = (unsigned short)8422;
short var_21 = (short)-2005;
unsigned long long int var_22 = 18270610466406493423ULL;
unsigned long long int var_23 = 9923659401661937615ULL;
unsigned short var_24 = (unsigned short)35591;
long long int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -8937991334473012718LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
