#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
signed char var_1 = (signed char)72;
unsigned char var_3 = (unsigned char)168;
unsigned char var_4 = (unsigned char)243;
unsigned int var_6 = 2113982513U;
unsigned char var_7 = (unsigned char)145;
unsigned short var_8 = (unsigned short)61526;
unsigned long long int var_9 = 12498350687399200878ULL;
unsigned short var_10 = (unsigned short)52904;
int zero = 0;
int var_11 = -114494067;
unsigned long long int var_12 = 17064030186962232977ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)159;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
