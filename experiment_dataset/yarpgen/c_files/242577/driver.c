#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26450;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned int var_9 = 3309527585U;
int var_11 = 710236070;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-70;
_Bool var_16 = (_Bool)1;
unsigned long long int var_19 = 13294818576123313384ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)196;
long long int var_21 = -1225787555525883373LL;
int var_22 = 1361092155;
unsigned int var_23 = 1268975573U;
unsigned long long int var_24 = 11822519683454433797ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
