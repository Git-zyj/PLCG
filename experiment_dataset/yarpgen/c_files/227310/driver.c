#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47482;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)142;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 847614777U;
unsigned short var_8 = (unsigned short)17159;
unsigned int var_9 = 3617366748U;
unsigned char var_10 = (unsigned char)175;
_Bool var_13 = (_Bool)1;
unsigned int var_16 = 328757859U;
int zero = 0;
unsigned int var_17 = 2734244139U;
unsigned char var_18 = (unsigned char)228;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
