#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)62;
unsigned long long int var_2 = 16816881438702474021ULL;
unsigned char var_6 = (unsigned char)30;
signed char var_8 = (signed char)30;
unsigned short var_10 = (unsigned short)3709;
signed char var_11 = (signed char)-62;
unsigned short var_16 = (unsigned short)54658;
int zero = 0;
unsigned short var_18 = (unsigned short)3408;
signed char var_19 = (signed char)100;
unsigned char var_20 = (unsigned char)23;
unsigned long long int var_21 = 11647374882900494144ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
