#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7006359445430477976ULL;
int var_1 = -1759828595;
short var_2 = (short)29139;
unsigned int var_6 = 2056282586U;
unsigned long long int var_9 = 847540582171132946ULL;
signed char var_10 = (signed char)-10;
unsigned char var_11 = (unsigned char)141;
int var_16 = 736981447;
int var_17 = 1009866378;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)62417;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)53;
signed char var_22 = (signed char)-101;
void init() {
}

void checksum() {
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
