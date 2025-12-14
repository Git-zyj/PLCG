#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)17;
short var_5 = (short)10917;
unsigned char var_6 = (unsigned char)23;
_Bool var_7 = (_Bool)1;
int var_10 = 1446592357;
unsigned int var_11 = 2549885417U;
long long int var_13 = 3077463510260968728LL;
long long int var_14 = -644101842154715784LL;
int zero = 0;
int var_15 = 1251625880;
unsigned int var_16 = 1609546692U;
unsigned char var_17 = (unsigned char)238;
long long int var_18 = 8084297940881240245LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
