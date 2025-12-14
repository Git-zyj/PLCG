#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5327665789892136721LL;
int var_2 = -1397861576;
short var_3 = (short)5004;
unsigned short var_4 = (unsigned short)62581;
unsigned char var_6 = (unsigned char)105;
unsigned char var_7 = (unsigned char)178;
unsigned short var_8 = (unsigned short)39314;
signed char var_9 = (signed char)123;
int zero = 0;
int var_10 = 1020436560;
signed char var_11 = (signed char)3;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
