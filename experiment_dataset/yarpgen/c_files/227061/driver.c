#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
signed char var_2 = (signed char)-11;
_Bool var_4 = (_Bool)1;
unsigned short var_10 = (unsigned short)61490;
long long int var_11 = -8101879295066704809LL;
int var_12 = 182620915;
int var_13 = 36453050;
unsigned char var_14 = (unsigned char)213;
int zero = 0;
int var_16 = -195644974;
unsigned char var_17 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
