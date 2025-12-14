#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 801942590;
short var_3 = (short)-183;
unsigned short var_7 = (unsigned short)44738;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)86;
signed char var_14 = (signed char)77;
int var_16 = -638432168;
int zero = 0;
signed char var_18 = (signed char)-28;
unsigned short var_19 = (unsigned short)32313;
signed char var_20 = (signed char)-86;
void init() {
}

void checksum() {
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
