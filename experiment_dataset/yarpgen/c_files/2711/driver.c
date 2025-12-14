#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)228;
int var_6 = -1628403103;
signed char var_7 = (signed char)97;
unsigned long long int var_8 = 15973086605772289809ULL;
short var_9 = (short)23782;
long long int var_11 = -5168450227699233392LL;
int zero = 0;
unsigned int var_18 = 628097200U;
short var_19 = (short)-2324;
short var_20 = (short)-15640;
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
