#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3604331183776368251ULL;
unsigned long long int var_2 = 12931094341248151449ULL;
signed char var_3 = (signed char)124;
unsigned short var_4 = (unsigned short)59099;
short var_5 = (short)9151;
unsigned long long int var_6 = 3153046096076222834ULL;
unsigned short var_8 = (unsigned short)45547;
long long int var_11 = -4830142957757466555LL;
unsigned long long int var_12 = 16039222338603337734ULL;
int zero = 0;
int var_14 = -827685681;
_Bool var_15 = (_Bool)1;
long long int var_16 = -8604215117472696558LL;
short var_17 = (short)-12766;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
