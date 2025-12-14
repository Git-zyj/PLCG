#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18010105233581247385ULL;
short var_3 = (short)10516;
signed char var_5 = (signed char)(-127 - 1);
long long int var_7 = 9219679344472720033LL;
long long int var_8 = -5398633563743920167LL;
unsigned int var_10 = 2171093389U;
signed char var_11 = (signed char)-74;
int zero = 0;
unsigned short var_12 = (unsigned short)64441;
_Bool var_13 = (_Bool)1;
short var_14 = (short)17136;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
