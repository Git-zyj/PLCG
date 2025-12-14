#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1276453618U;
unsigned short var_1 = (unsigned short)28567;
int var_4 = 1184664366;
short var_6 = (short)4123;
unsigned long long int var_7 = 11809200936667489137ULL;
signed char var_8 = (signed char)65;
_Bool var_11 = (_Bool)1;
unsigned int var_15 = 374719965U;
int zero = 0;
unsigned short var_17 = (unsigned short)34373;
unsigned char var_18 = (unsigned char)74;
long long int var_19 = 1849490689226331954LL;
short var_20 = (short)-9961;
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
