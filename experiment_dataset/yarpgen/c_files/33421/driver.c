#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26840;
unsigned int var_1 = 899531351U;
unsigned short var_6 = (unsigned short)41408;
_Bool var_8 = (_Bool)0;
short var_9 = (short)30540;
int zero = 0;
signed char var_12 = (signed char)-37;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)13;
long long int var_15 = -7959493490345987107LL;
void init() {
}

void checksum() {
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
