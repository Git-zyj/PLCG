#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)88;
int var_2 = -137712105;
int var_4 = 722759295;
long long int var_5 = 6916326298907498002LL;
unsigned char var_6 = (unsigned char)154;
int var_11 = 1491439930;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)160;
signed char var_21 = (signed char)-14;
unsigned short var_22 = (unsigned short)26118;
int var_23 = 1726322037;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
