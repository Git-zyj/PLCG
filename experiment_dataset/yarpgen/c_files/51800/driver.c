#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3698738814U;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)34947;
unsigned char var_9 = (unsigned char)229;
unsigned char var_11 = (unsigned char)103;
int zero = 0;
int var_17 = -759287561;
short var_18 = (short)-9452;
int var_19 = 1187098390;
int var_20 = -1390509083;
int var_21 = 250719210;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
