#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8032;
long long int var_1 = -5353356726217553766LL;
unsigned char var_3 = (unsigned char)22;
unsigned short var_5 = (unsigned short)34536;
signed char var_7 = (signed char)121;
signed char var_8 = (signed char)70;
short var_9 = (short)-19929;
long long int var_11 = -4186539885172095206LL;
unsigned short var_12 = (unsigned short)8323;
short var_13 = (short)-5493;
int zero = 0;
unsigned int var_14 = 2892154779U;
long long int var_15 = 5438054758804868291LL;
short var_16 = (short)24365;
unsigned long long int var_17 = 12227042595461603647ULL;
unsigned long long int var_18 = 4598997590718812438ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
