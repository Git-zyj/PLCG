#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26970;
unsigned long long int var_2 = 7683303998857697123ULL;
signed char var_4 = (signed char)4;
short var_5 = (short)-9947;
_Bool var_7 = (_Bool)0;
long long int var_8 = 5852152002111477606LL;
unsigned short var_9 = (unsigned short)620;
unsigned long long int var_12 = 5257240433247312685ULL;
unsigned char var_13 = (unsigned char)169;
int zero = 0;
unsigned short var_18 = (unsigned short)6178;
short var_19 = (short)-15383;
unsigned long long int var_20 = 6047951382971043951ULL;
void init() {
}

void checksum() {
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
