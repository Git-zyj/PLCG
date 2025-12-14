#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)100;
short var_1 = (short)-1943;
short var_2 = (short)12117;
short var_8 = (short)21963;
unsigned int var_12 = 1146799158U;
unsigned int var_14 = 3216781155U;
int zero = 0;
unsigned short var_15 = (unsigned short)28003;
unsigned char var_16 = (unsigned char)195;
long long int var_17 = -6364633730119599897LL;
void init() {
}

void checksum() {
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
