#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16269;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-96;
long long int var_5 = -3145640405629462735LL;
int var_6 = -1279802001;
short var_7 = (short)-13613;
unsigned long long int var_8 = 7571328838729602623ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 1402765253U;
unsigned long long int var_12 = 4941042254636316140ULL;
long long int var_13 = -7561592936981996257LL;
unsigned long long int var_14 = 11107227263499224302ULL;
unsigned long long int var_15 = 17358069497460668279ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
