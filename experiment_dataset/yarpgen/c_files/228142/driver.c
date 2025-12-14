#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26012;
unsigned short var_1 = (unsigned short)35586;
signed char var_2 = (signed char)52;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)222;
signed char var_8 = (signed char)-120;
signed char var_9 = (signed char)60;
int zero = 0;
int var_10 = -335309229;
short var_11 = (short)-23203;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
