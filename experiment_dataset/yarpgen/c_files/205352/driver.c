#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
unsigned long long int var_1 = 2455629003643059201ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 5447885732496159ULL;
signed char var_7 = (signed char)-12;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-22529;
unsigned int var_11 = 331651800U;
int zero = 0;
unsigned int var_12 = 2503031550U;
unsigned char var_13 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
