#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)52;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 11480723073302472731ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-12757;
unsigned long long int var_9 = 293766547499896373ULL;
signed char var_10 = (signed char)-70;
int zero = 0;
int var_11 = -1581133244;
unsigned char var_12 = (unsigned char)18;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
