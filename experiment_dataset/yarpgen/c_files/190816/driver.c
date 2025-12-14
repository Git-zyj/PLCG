#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -349290682;
unsigned char var_8 = (unsigned char)134;
unsigned short var_9 = (unsigned short)37457;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)21;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 629660542U;
signed char var_16 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
