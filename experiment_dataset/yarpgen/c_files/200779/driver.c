#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2061355396;
int var_3 = 262250836;
int var_4 = -783281990;
_Bool var_5 = (_Bool)0;
long long int var_8 = 1589643152726780606LL;
unsigned long long int var_9 = 2543066014864369872ULL;
long long int var_12 = -4005362063147951884LL;
short var_14 = (short)-27583;
int var_16 = -878141218;
int zero = 0;
int var_18 = -1786040344;
unsigned long long int var_19 = 6239557701394083262ULL;
unsigned int var_20 = 4237103439U;
void init() {
}

void checksum() {
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
