#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
unsigned short var_1 = (unsigned short)8124;
int var_2 = 559063282;
short var_3 = (short)8151;
signed char var_4 = (signed char)-117;
unsigned char var_5 = (unsigned char)177;
signed char var_7 = (signed char)-92;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
long long int var_10 = 5993103752770488366LL;
unsigned long long int var_12 = 15065739301154771460ULL;
int zero = 0;
signed char var_15 = (signed char)-98;
long long int var_16 = -6496212690539473868LL;
unsigned int var_17 = 495780570U;
signed char var_18 = (signed char)101;
void init() {
}

void checksum() {
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
