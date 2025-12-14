#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1307685749219243737ULL;
signed char var_1 = (signed char)65;
int var_2 = -1116707155;
short var_3 = (short)5278;
short var_4 = (short)11896;
_Bool var_6 = (_Bool)1;
short var_12 = (short)-27645;
int zero = 0;
int var_17 = -1496325917;
int var_18 = -898144404;
int var_19 = 307010828;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
