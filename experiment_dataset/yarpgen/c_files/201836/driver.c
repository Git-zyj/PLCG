#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned char var_2 = (unsigned char)216;
unsigned char var_3 = (unsigned char)153;
unsigned short var_4 = (unsigned short)16199;
unsigned int var_9 = 603891698U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)65;
unsigned int var_12 = 1184068262U;
long long int var_13 = 8867982220587992595LL;
signed char var_14 = (signed char)98;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
