#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3363326741U;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2663769646U;
unsigned short var_9 = (unsigned short)13694;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)65065;
unsigned int var_21 = 540157652U;
unsigned char var_22 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
