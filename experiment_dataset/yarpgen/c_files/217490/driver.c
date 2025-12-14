#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52404;
signed char var_1 = (signed char)-96;
short var_3 = (short)30660;
unsigned long long int var_4 = 7272203109413348947ULL;
unsigned char var_7 = (unsigned char)186;
_Bool var_14 = (_Bool)0;
short var_15 = (short)32156;
signed char var_16 = (signed char)-85;
int zero = 0;
unsigned char var_17 = (unsigned char)15;
signed char var_18 = (signed char)45;
signed char var_19 = (signed char)46;
long long int var_20 = -4070985724349453908LL;
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
