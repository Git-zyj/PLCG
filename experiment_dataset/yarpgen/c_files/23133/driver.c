#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14812900266559436724ULL;
signed char var_2 = (signed char)-26;
unsigned int var_3 = 687742752U;
_Bool var_7 = (_Bool)0;
unsigned short var_10 = (unsigned short)40096;
short var_11 = (short)18766;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-8019;
signed char var_14 = (signed char)-61;
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
