#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6127728051534333503LL;
long long int var_3 = -9089702843346466938LL;
long long int var_5 = 6490019622228925641LL;
long long int var_7 = 8557018211277721923LL;
unsigned long long int var_9 = 13533357018690542214ULL;
long long int var_10 = -2176562966105354407LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = 1597167742687119533LL;
int var_18 = -1596337902;
int zero = 0;
long long int var_19 = 7330777679531056993LL;
_Bool var_20 = (_Bool)0;
int var_21 = -341188645;
short var_22 = (short)16616;
long long int var_23 = 272439098273023394LL;
long long int var_24 = 8335566507296904492LL;
int arr_1 [10] ;
_Bool arr_8 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -721781698;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)0;
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
