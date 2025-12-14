#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3078664112775409542LL;
short var_4 = (short)-23333;
unsigned int var_5 = 185026320U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 15178491450135716599ULL;
unsigned int var_9 = 317237245U;
int var_10 = 1275803105;
unsigned long long int var_12 = 16485685436527510952ULL;
int zero = 0;
int var_14 = 1626219980;
unsigned long long int var_15 = 17922544472838125625ULL;
long long int var_16 = 9067799535052889922LL;
_Bool arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
