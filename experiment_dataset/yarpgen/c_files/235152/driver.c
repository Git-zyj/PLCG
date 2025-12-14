#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2052107062;
unsigned char var_1 = (unsigned char)253;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)162;
unsigned char var_6 = (unsigned char)249;
unsigned short var_9 = (unsigned short)31312;
unsigned int var_10 = 249756038U;
unsigned char var_11 = (unsigned char)228;
int var_13 = -562543439;
signed char var_15 = (signed char)-104;
int zero = 0;
unsigned char var_17 = (unsigned char)228;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)25;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
