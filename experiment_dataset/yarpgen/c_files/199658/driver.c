#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
unsigned short var_3 = (unsigned short)7275;
unsigned long long int var_6 = 17203540016572036495ULL;
unsigned short var_10 = (unsigned short)39803;
int var_15 = 1614980323;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 1822395673;
unsigned long long int var_20 = 5184663861486584482ULL;
short var_21 = (short)-12072;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
