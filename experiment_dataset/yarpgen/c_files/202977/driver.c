#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -683231748;
signed char var_3 = (signed char)-63;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-1809;
short var_6 = (short)-11846;
short var_7 = (short)-11858;
int var_13 = 2101828489;
int zero = 0;
signed char var_17 = (signed char)-41;
unsigned short var_18 = (unsigned short)63967;
short var_19 = (short)21654;
unsigned long long int var_20 = 18025250850010559335ULL;
unsigned char var_21 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
