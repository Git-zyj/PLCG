#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 448299476466953573ULL;
signed char var_1 = (signed char)-63;
unsigned short var_2 = (unsigned short)46064;
long long int var_4 = 3268751450025221758LL;
unsigned char var_5 = (unsigned char)252;
long long int var_6 = 5266514188100038886LL;
long long int var_7 = -9189170406014736864LL;
int var_11 = -982288460;
int zero = 0;
unsigned long long int var_12 = 9330137795384680615ULL;
signed char var_13 = (signed char)-47;
short var_14 = (short)7643;
void init() {
}

void checksum() {
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
