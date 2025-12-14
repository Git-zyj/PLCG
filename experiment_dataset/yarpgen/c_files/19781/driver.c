#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44948;
short var_1 = (short)22694;
unsigned char var_3 = (unsigned char)133;
int var_4 = 101343719;
unsigned short var_6 = (unsigned short)47656;
unsigned short var_7 = (unsigned short)40117;
unsigned long long int var_8 = 2821097040666604900ULL;
unsigned short var_9 = (unsigned short)7400;
unsigned long long int var_10 = 14254897217157291177ULL;
int zero = 0;
unsigned int var_11 = 2597535436U;
short var_12 = (short)-4775;
unsigned long long int var_13 = 8626861846469815157ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
