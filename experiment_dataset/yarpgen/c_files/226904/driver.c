#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 242079048;
unsigned int var_2 = 633585930U;
int var_3 = -1368097179;
signed char var_5 = (signed char)53;
long long int var_6 = -6143216871119637746LL;
unsigned short var_9 = (unsigned short)4270;
signed char var_10 = (signed char)-12;
signed char var_11 = (signed char)94;
int zero = 0;
short var_12 = (short)20346;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)22;
void init() {
}

void checksum() {
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
