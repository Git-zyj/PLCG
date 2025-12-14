#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47051;
unsigned char var_3 = (unsigned char)254;
unsigned short var_9 = (unsigned short)23406;
int zero = 0;
unsigned short var_12 = (unsigned short)38287;
long long int var_13 = -3476384258060020804LL;
long long int var_14 = 7198561625599315635LL;
_Bool arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
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
