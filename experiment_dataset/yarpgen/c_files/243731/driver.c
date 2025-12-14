#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5580;
unsigned int var_2 = 2591810105U;
unsigned char var_3 = (unsigned char)98;
unsigned short var_4 = (unsigned short)33102;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)234;
int zero = 0;
short var_12 = (short)-6544;
long long int var_13 = -6379575264955880146LL;
unsigned long long int var_14 = 7316407490184292284ULL;
unsigned long long int var_15 = 8291864039554603682ULL;
unsigned char arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)85;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
