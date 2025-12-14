#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11470408345414236212ULL;
short var_2 = (short)17773;
signed char var_3 = (signed char)-86;
unsigned long long int var_8 = 5268162149053497787ULL;
unsigned char var_11 = (unsigned char)40;
unsigned char var_14 = (unsigned char)109;
int zero = 0;
long long int var_16 = -8535294274375976433LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
