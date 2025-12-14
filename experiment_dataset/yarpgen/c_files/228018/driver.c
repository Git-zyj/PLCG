#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7547;
unsigned char var_2 = (unsigned char)254;
unsigned short var_4 = (unsigned short)49813;
unsigned int var_5 = 336088202U;
short var_7 = (short)9697;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-120;
int zero = 0;
short var_10 = (short)32739;
unsigned char var_11 = (unsigned char)87;
unsigned int var_12 = 1791112793U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
