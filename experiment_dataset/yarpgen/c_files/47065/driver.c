#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9835;
short var_2 = (short)-18717;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-61;
long long int var_7 = -9217178024478790150LL;
int zero = 0;
short var_18 = (short)24433;
unsigned short var_19 = (unsigned short)30402;
void init() {
}

void checksum() {
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
