#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)55194;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)40697;
int var_7 = 751887411;
unsigned short var_8 = (unsigned short)7866;
long long int var_11 = -459111361753081660LL;
int zero = 0;
signed char var_12 = (signed char)-113;
unsigned char var_13 = (unsigned char)234;
void init() {
}

void checksum() {
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
