#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
unsigned int var_1 = 1605688201U;
unsigned long long int var_2 = 16901264646959960889ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)19598;
short var_5 = (short)16221;
unsigned int var_6 = 692559219U;
unsigned long long int var_8 = 12365085562552053665ULL;
unsigned short var_9 = (unsigned short)4191;
long long int var_10 = -5460961137988828497LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)46653;
unsigned long long int var_14 = 13692188931837806608ULL;
unsigned short var_15 = (unsigned short)59844;
int var_16 = -683347925;
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
