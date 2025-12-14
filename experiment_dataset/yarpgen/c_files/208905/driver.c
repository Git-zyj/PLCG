#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-18142;
_Bool var_2 = (_Bool)0;
unsigned short var_6 = (unsigned short)57125;
signed char var_7 = (signed char)43;
unsigned short var_8 = (unsigned short)51565;
short var_10 = (short)-18148;
short var_11 = (short)5150;
long long int var_13 = 2575615273818772868LL;
signed char var_14 = (signed char)5;
int zero = 0;
short var_17 = (short)-7891;
short var_18 = (short)27459;
unsigned short var_19 = (unsigned short)9001;
signed char var_20 = (signed char)-101;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
