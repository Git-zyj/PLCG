#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned int var_1 = 84302661U;
unsigned short var_2 = (unsigned short)55628;
unsigned long long int var_5 = 13893706382305828472ULL;
short var_6 = (short)8295;
int var_7 = 2057879383;
unsigned long long int var_8 = 14713424871905174420ULL;
unsigned char var_9 = (unsigned char)246;
unsigned int var_11 = 943868280U;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3073575065U;
unsigned int var_14 = 4167781185U;
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
