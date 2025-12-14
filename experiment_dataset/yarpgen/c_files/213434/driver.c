#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1308522895;
signed char var_1 = (signed char)18;
long long int var_2 = 8508525670772026844LL;
unsigned short var_3 = (unsigned short)63818;
unsigned char var_5 = (unsigned char)41;
long long int var_7 = 7508567106325568622LL;
unsigned long long int var_8 = 3169322702423242430ULL;
short var_9 = (short)-22174;
unsigned char var_11 = (unsigned char)26;
unsigned char var_12 = (unsigned char)95;
signed char var_13 = (signed char)63;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)25099;
int zero = 0;
int var_16 = -2050997349;
signed char var_17 = (signed char)6;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)1;
unsigned int var_20 = 3483148893U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
