#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)121;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 960852196U;
unsigned short var_12 = (unsigned short)36781;
int zero = 0;
int var_15 = 354223209;
int var_16 = 1850940056;
long long int var_17 = -3842495705602938207LL;
unsigned char var_18 = (unsigned char)107;
short var_19 = (short)-3881;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
