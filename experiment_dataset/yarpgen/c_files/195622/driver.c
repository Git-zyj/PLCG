#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5409653853453645844LL;
unsigned long long int var_4 = 14119465943747792617ULL;
unsigned char var_5 = (unsigned char)3;
unsigned short var_7 = (unsigned short)5984;
_Bool var_9 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)166;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)52512;
unsigned int var_20 = 3922504754U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
