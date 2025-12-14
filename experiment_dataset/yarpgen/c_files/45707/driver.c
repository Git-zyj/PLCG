#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 51052282U;
_Bool var_2 = (_Bool)0;
long long int var_5 = -7288765947686499109LL;
signed char var_6 = (signed char)-59;
unsigned short var_8 = (unsigned short)37758;
short var_9 = (short)24726;
unsigned long long int var_10 = 12671326417334747197ULL;
int var_11 = -1173910601;
int zero = 0;
short var_13 = (short)26591;
unsigned char var_14 = (unsigned char)9;
unsigned int var_15 = 2595175255U;
void init() {
}

void checksum() {
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
