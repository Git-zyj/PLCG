#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13852470114595512505ULL;
int var_1 = -1114291672;
signed char var_2 = (signed char)112;
short var_3 = (short)-29702;
short var_4 = (short)-28892;
signed char var_5 = (signed char)-44;
unsigned short var_7 = (unsigned short)46118;
short var_8 = (short)30354;
int zero = 0;
unsigned short var_10 = (unsigned short)58982;
unsigned short var_11 = (unsigned short)59735;
unsigned char var_12 = (unsigned char)20;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
