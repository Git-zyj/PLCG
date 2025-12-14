#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)116;
unsigned char var_1 = (unsigned char)18;
long long int var_2 = 1153545597719921695LL;
unsigned short var_4 = (unsigned short)9213;
signed char var_5 = (signed char)1;
unsigned short var_6 = (unsigned short)125;
unsigned short var_7 = (unsigned short)9002;
int zero = 0;
signed char var_10 = (signed char)-118;
unsigned short var_11 = (unsigned short)15807;
int var_12 = -1106026514;
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
