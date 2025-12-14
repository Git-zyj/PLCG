#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57745;
unsigned char var_3 = (unsigned char)144;
unsigned long long int var_4 = 7828555352900633836ULL;
unsigned long long int var_6 = 17899559627094028181ULL;
short var_8 = (short)-10623;
unsigned char var_9 = (unsigned char)124;
unsigned int var_11 = 3116019774U;
signed char var_13 = (signed char)-76;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 169077519U;
short var_17 = (short)-5913;
unsigned long long int var_18 = 8096885879725945596ULL;
int zero = 0;
short var_19 = (short)-23497;
unsigned int var_20 = 1359241242U;
unsigned char var_21 = (unsigned char)217;
int var_22 = -1529294099;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
