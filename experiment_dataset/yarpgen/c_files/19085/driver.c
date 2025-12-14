#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3663457455544529238LL;
long long int var_3 = 6091011560561473917LL;
unsigned short var_4 = (unsigned short)57021;
unsigned char var_6 = (unsigned char)118;
signed char var_7 = (signed char)77;
signed char var_11 = (signed char)-38;
int var_12 = -1982639461;
unsigned char var_14 = (unsigned char)156;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3432792825U;
short var_19 = (short)23343;
int var_20 = 1347939008;
short var_21 = (short)14073;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
