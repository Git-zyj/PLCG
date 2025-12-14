#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)49851;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 3169614390U;
unsigned int var_13 = 3554254006U;
short var_14 = (short)7194;
unsigned char var_17 = (unsigned char)188;
int zero = 0;
signed char var_19 = (signed char)-14;
unsigned int var_20 = 1424615511U;
unsigned char var_21 = (unsigned char)118;
void init() {
}

void checksum() {
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
