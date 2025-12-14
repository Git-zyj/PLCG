#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6767;
unsigned short var_3 = (unsigned short)8657;
unsigned int var_6 = 1308142520U;
unsigned int var_7 = 2728567418U;
int var_8 = 884883909;
int var_9 = -1250650529;
signed char var_13 = (signed char)-58;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-18348;
signed char var_16 = (signed char)-4;
signed char var_17 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
