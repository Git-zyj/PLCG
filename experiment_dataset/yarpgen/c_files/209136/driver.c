#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3404894744U;
unsigned char var_3 = (unsigned char)79;
short var_6 = (short)-21107;
signed char var_9 = (signed char)105;
signed char var_13 = (signed char)48;
_Bool var_14 = (_Bool)0;
unsigned char var_17 = (unsigned char)142;
long long int var_18 = -8156344930454509058LL;
int zero = 0;
short var_19 = (short)2617;
signed char var_20 = (signed char)-78;
int var_21 = -1010869800;
unsigned short var_22 = (unsigned short)28965;
signed char var_23 = (signed char)-66;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
