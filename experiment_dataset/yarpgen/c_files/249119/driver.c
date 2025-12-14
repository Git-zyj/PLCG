#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2082063276;
int var_2 = -470553663;
unsigned short var_3 = (unsigned short)45430;
unsigned char var_8 = (unsigned char)68;
unsigned long long int var_10 = 9909895237041531062ULL;
int zero = 0;
short var_11 = (short)28340;
int var_12 = -1879073131;
unsigned long long int var_13 = 8152833904135997312ULL;
long long int var_14 = 2952411699758447592LL;
unsigned int var_15 = 1751685976U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
