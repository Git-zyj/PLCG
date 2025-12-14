#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1719294697U;
signed char var_1 = (signed char)43;
_Bool var_3 = (_Bool)1;
unsigned short var_5 = (unsigned short)35268;
int var_7 = -384541339;
unsigned short var_9 = (unsigned short)52860;
_Bool var_11 = (_Bool)1;
long long int var_12 = -4093258309047427938LL;
unsigned int var_13 = 2499864150U;
int zero = 0;
unsigned char var_15 = (unsigned char)197;
unsigned int var_16 = 130907955U;
void init() {
}

void checksum() {
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
