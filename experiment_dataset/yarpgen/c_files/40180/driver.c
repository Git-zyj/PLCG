#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1955766917U;
signed char var_3 = (signed char)87;
unsigned int var_4 = 2981935492U;
long long int var_7 = 5447340983278427699LL;
unsigned short var_9 = (unsigned short)18937;
unsigned short var_10 = (unsigned short)22961;
int var_12 = 784335822;
signed char var_13 = (signed char)67;
unsigned char var_14 = (unsigned char)122;
signed char var_15 = (signed char)-46;
int var_16 = -2121798551;
int zero = 0;
signed char var_17 = (signed char)17;
unsigned char var_18 = (unsigned char)159;
signed char var_19 = (signed char)-99;
_Bool var_20 = (_Bool)0;
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
