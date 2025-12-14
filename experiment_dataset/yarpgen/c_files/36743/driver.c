#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17949;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)225;
unsigned int var_8 = 3405826196U;
int var_10 = 1432175180;
long long int var_13 = -2511018682002767071LL;
unsigned int var_16 = 199420274U;
int zero = 0;
int var_17 = 1498023216;
unsigned short var_18 = (unsigned short)40899;
int var_19 = 484858479;
void init() {
}

void checksum() {
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
