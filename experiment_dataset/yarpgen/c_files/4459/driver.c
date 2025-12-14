#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 810344347284491305ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 6127595425580535300ULL;
unsigned long long int var_10 = 7052433835387744ULL;
unsigned short var_11 = (unsigned short)21000;
unsigned char var_12 = (unsigned char)185;
unsigned long long int var_13 = 13758368796912137656ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)65;
unsigned long long int var_16 = 987100584487900803ULL;
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
