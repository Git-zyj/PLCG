#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)220;
unsigned long long int var_5 = 13562813579816517925ULL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 9105448966323007793LL;
unsigned short var_9 = (unsigned short)50077;
int zero = 0;
short var_10 = (short)16741;
signed char var_11 = (signed char)-97;
int var_12 = 2063006118;
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
