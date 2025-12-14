#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2742273727U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)28639;
unsigned short var_6 = (unsigned short)16499;
unsigned char var_7 = (unsigned char)38;
unsigned long long int var_10 = 2611759504773543376ULL;
unsigned int var_12 = 2886793803U;
unsigned int var_13 = 305072522U;
int var_14 = 1290177062;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_18 = 1236799845;
unsigned long long int var_19 = 7923550555236664405ULL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
