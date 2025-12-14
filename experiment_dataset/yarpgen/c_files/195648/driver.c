#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26345;
short var_1 = (short)5735;
unsigned short var_2 = (unsigned short)63491;
unsigned char var_3 = (unsigned char)149;
short var_4 = (short)20615;
signed char var_5 = (signed char)23;
_Bool var_9 = (_Bool)1;
short var_10 = (short)31224;
int zero = 0;
unsigned long long int var_11 = 10631308210128655639ULL;
signed char var_12 = (signed char)-80;
long long int var_13 = 127767721019626121LL;
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
