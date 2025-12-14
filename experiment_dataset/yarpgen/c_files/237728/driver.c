#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1276581322308766119LL;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)71;
long long int var_3 = -4444862585962173420LL;
int var_7 = 116916607;
int var_10 = -1258104343;
int zero = 0;
unsigned short var_11 = (unsigned short)50376;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
