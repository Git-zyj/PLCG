#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
int var_1 = -1541521523;
unsigned char var_2 = (unsigned char)231;
unsigned char var_3 = (unsigned char)154;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)222;
unsigned char var_7 = (unsigned char)156;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)161;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-101;
unsigned char var_14 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
