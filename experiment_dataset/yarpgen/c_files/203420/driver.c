#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3904856545058854099LL;
signed char var_2 = (signed char)-105;
_Bool var_3 = (_Bool)1;
int var_5 = -563941639;
_Bool var_7 = (_Bool)0;
unsigned short var_13 = (unsigned short)374;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)192;
short var_17 = (short)3546;
long long int var_18 = -1861632663367534931LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
