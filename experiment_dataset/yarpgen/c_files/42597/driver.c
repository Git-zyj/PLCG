#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4242399752U;
signed char var_1 = (signed char)32;
int var_3 = -1367126542;
long long int var_4 = -5307835510531358716LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1757734919U;
unsigned int var_7 = 1263191453U;
unsigned short var_8 = (unsigned short)49643;
long long int var_10 = -9223339292170414109LL;
int var_11 = -1801680638;
int zero = 0;
unsigned char var_13 = (unsigned char)151;
unsigned int var_14 = 3228134795U;
signed char var_15 = (signed char)114;
unsigned char var_16 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
