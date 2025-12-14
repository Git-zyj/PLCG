#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8013243692163473371LL;
short var_4 = (short)9103;
unsigned long long int var_5 = 11373252521504250206ULL;
signed char var_8 = (signed char)-110;
long long int var_9 = 8124869636317808880LL;
long long int var_10 = -1433305550943918103LL;
long long int var_12 = 7780931664727533876LL;
unsigned int var_13 = 1202850181U;
int var_14 = 619977940;
long long int var_15 = 7977912341760744197LL;
int var_17 = 261186317;
int zero = 0;
short var_18 = (short)-21283;
long long int var_19 = 6446024816651345596LL;
short var_20 = (short)-15356;
short var_21 = (short)32252;
unsigned long long int var_22 = 14491699950565753319ULL;
unsigned int var_23 = 860733493U;
unsigned long long int var_24 = 14603712944844355474ULL;
short arr_0 [10] ;
long long int arr_1 [10] ;
int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-18192;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1775117473680186258LL : 3644292980371692798LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 1275810033;
}

void checksum() {
    hash(&seed, var_18);
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
