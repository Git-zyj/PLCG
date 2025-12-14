#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
long long int var_1 = 6358308064789125175LL;
unsigned char var_2 = (unsigned char)31;
unsigned long long int var_4 = 4677409110996400376ULL;
signed char var_5 = (signed char)-10;
unsigned short var_7 = (unsigned short)56481;
signed char var_8 = (signed char)-29;
long long int var_10 = -2781871799040653692LL;
unsigned short var_11 = (unsigned short)64295;
long long int var_13 = 570705825048089601LL;
int zero = 0;
unsigned int var_14 = 1152163178U;
long long int var_15 = -8013413035592289049LL;
long long int var_16 = 1497129832287071558LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
