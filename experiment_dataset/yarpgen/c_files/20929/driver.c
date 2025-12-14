#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)4;
unsigned char var_2 = (unsigned char)241;
long long int var_3 = -638250692470403396LL;
int var_5 = -1723611735;
long long int var_6 = 602207594508435795LL;
unsigned int var_7 = 2736511629U;
long long int var_9 = -1159220962955342547LL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)41;
unsigned short var_13 = (unsigned short)15416;
short var_14 = (short)-10694;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-16667;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
