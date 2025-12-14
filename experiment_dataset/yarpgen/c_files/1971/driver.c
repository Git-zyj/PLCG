#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62868;
unsigned char var_3 = (unsigned char)225;
signed char var_8 = (signed char)67;
unsigned int var_10 = 4121963429U;
long long int var_11 = -5932374406259418977LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 9384945004067659543ULL;
unsigned long long int var_14 = 5825274542509316912ULL;
unsigned int var_15 = 2443694321U;
unsigned long long int var_16 = 3427770158528671790ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
