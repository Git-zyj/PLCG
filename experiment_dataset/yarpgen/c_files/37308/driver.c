#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)31;
unsigned long long int var_1 = 17027025677652606857ULL;
signed char var_2 = (signed char)62;
unsigned char var_6 = (unsigned char)142;
unsigned long long int var_7 = 14350293263314093188ULL;
unsigned long long int var_8 = 5606405616849625802ULL;
unsigned long long int var_10 = 12804540252249116930ULL;
long long int var_13 = 6028627263354325055LL;
_Bool var_14 = (_Bool)0;
short var_16 = (short)-24314;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -6801439655275822959LL;
unsigned long long int var_19 = 14777439979912472588ULL;
unsigned long long int var_20 = 3672686024742628889ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
