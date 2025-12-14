#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43839;
signed char var_3 = (signed char)-37;
unsigned long long int var_4 = 4023037798339838471ULL;
short var_5 = (short)26501;
short var_7 = (short)-20034;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)151;
unsigned char var_13 = (unsigned char)217;
unsigned long long int var_16 = 15534575219852517790ULL;
int var_18 = -2085126649;
int zero = 0;
signed char var_19 = (signed char)44;
int var_20 = -1545344119;
void init() {
}

void checksum() {
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
