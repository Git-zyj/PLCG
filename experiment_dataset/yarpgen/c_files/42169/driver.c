#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45565;
unsigned short var_3 = (unsigned short)32835;
unsigned int var_4 = 4233247222U;
int var_6 = -164633428;
unsigned short var_8 = (unsigned short)24437;
unsigned short var_9 = (unsigned short)48704;
short var_10 = (short)1310;
int zero = 0;
signed char var_11 = (signed char)15;
unsigned char var_12 = (unsigned char)49;
int var_13 = -219169033;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2826756956U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
