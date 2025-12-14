#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 109904454U;
signed char var_4 = (signed char)44;
long long int var_5 = -4303661029807260539LL;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-53;
long long int var_9 = 8859295364260946438LL;
unsigned int var_10 = 4157484814U;
unsigned short var_11 = (unsigned short)64715;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)122;
unsigned char var_14 = (unsigned char)236;
void init() {
}

void checksum() {
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
