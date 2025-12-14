#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8488;
int var_2 = 1644155173;
signed char var_5 = (signed char)-31;
short var_7 = (short)-14246;
signed char var_8 = (signed char)106;
short var_9 = (short)-27716;
unsigned char var_11 = (unsigned char)40;
long long int var_14 = 2138886085359719258LL;
signed char var_16 = (signed char)21;
int zero = 0;
unsigned char var_17 = (unsigned char)117;
unsigned char var_18 = (unsigned char)159;
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
