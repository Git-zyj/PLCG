#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1248215762U;
signed char var_8 = (signed char)-111;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)238;
long long int var_14 = 4919049351096800075LL;
unsigned short var_15 = (unsigned short)52563;
int zero = 0;
short var_20 = (short)9782;
unsigned long long int var_21 = 10907470426616814270ULL;
void init() {
}

void checksum() {
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
