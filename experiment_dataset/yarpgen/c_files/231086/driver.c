#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
short var_2 = (short)-19480;
unsigned char var_4 = (unsigned char)237;
unsigned short var_5 = (unsigned short)51589;
long long int var_7 = 20524393080407034LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_11 = 205617445943331864ULL;
int zero = 0;
unsigned long long int var_12 = 11810085468155839308ULL;
long long int var_13 = -1544265784849741015LL;
signed char var_14 = (signed char)85;
signed char var_15 = (signed char)-5;
unsigned short var_16 = (unsigned short)63810;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
