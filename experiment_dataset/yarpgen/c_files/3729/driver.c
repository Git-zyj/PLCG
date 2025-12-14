#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-110;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)19;
unsigned short var_5 = (unsigned short)47305;
signed char var_6 = (signed char)19;
unsigned short var_9 = (unsigned short)15664;
unsigned int var_10 = 1434348782U;
int zero = 0;
signed char var_11 = (signed char)-97;
unsigned char var_12 = (unsigned char)134;
unsigned short var_13 = (unsigned short)5859;
_Bool var_14 = (_Bool)0;
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
