#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned short var_4 = (unsigned short)64617;
long long int var_7 = 974929701498730523LL;
int var_8 = -2076836974;
unsigned long long int var_9 = 9015644792111999669ULL;
int var_11 = 1307215399;
unsigned char var_12 = (unsigned char)157;
unsigned long long int var_14 = 590876373417539451ULL;
signed char var_16 = (signed char)96;
unsigned short var_17 = (unsigned short)31887;
unsigned short var_18 = (unsigned short)16257;
int zero = 0;
unsigned short var_19 = (unsigned short)56165;
short var_20 = (short)-18674;
unsigned int var_21 = 3637169356U;
int var_22 = -683559482;
unsigned long long int var_23 = 5062961114519065837ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
