#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3384;
unsigned int var_1 = 2529123016U;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-56;
unsigned char var_7 = (unsigned char)159;
signed char var_8 = (signed char)-115;
short var_9 = (short)-10311;
unsigned int var_10 = 956918189U;
unsigned int var_15 = 3174775668U;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)37;
_Bool var_21 = (_Bool)1;
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
