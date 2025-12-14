#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15330;
unsigned int var_4 = 3470530248U;
short var_6 = (short)27380;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)217;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)24488;
int zero = 0;
int var_16 = 964830697;
unsigned char var_17 = (unsigned char)137;
unsigned short var_18 = (unsigned short)6981;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
