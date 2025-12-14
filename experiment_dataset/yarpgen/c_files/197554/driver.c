#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52957;
long long int var_1 = 4087456403002310852LL;
long long int var_2 = 6710697237995948539LL;
unsigned int var_3 = 3660525198U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int var_6 = 935324047;
unsigned char var_7 = (unsigned char)239;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 5387796255018931852ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 13607873340213790456ULL;
unsigned short var_13 = (unsigned short)60229;
int zero = 0;
int var_14 = -1419296137;
int var_15 = -812259794;
void init() {
}

void checksum() {
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
