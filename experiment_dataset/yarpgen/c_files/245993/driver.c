#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1087545749;
unsigned long long int var_3 = 12139339919074342239ULL;
unsigned char var_4 = (unsigned char)201;
unsigned char var_5 = (unsigned char)92;
unsigned char var_6 = (unsigned char)51;
short var_7 = (short)23319;
short var_8 = (short)-23031;
unsigned long long int var_9 = 7175574162638685075ULL;
short var_10 = (short)14102;
unsigned char var_11 = (unsigned char)23;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1094009800U;
int zero = 0;
long long int var_16 = 5977032525885841364LL;
unsigned long long int var_17 = 5161330206923238450ULL;
int var_18 = 1839345309;
signed char var_19 = (signed char)3;
int var_20 = -1076998021;
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
