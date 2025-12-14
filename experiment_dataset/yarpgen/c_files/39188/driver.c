#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-66;
unsigned char var_6 = (unsigned char)221;
long long int var_9 = 7520957452502083506LL;
int zero = 0;
unsigned short var_11 = (unsigned short)1616;
int var_12 = -2075770044;
signed char var_13 = (signed char)-49;
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
