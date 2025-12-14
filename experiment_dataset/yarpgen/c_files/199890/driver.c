#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)102;
long long int var_3 = -4011320629347117539LL;
unsigned long long int var_5 = 7600588964002856191ULL;
unsigned char var_6 = (unsigned char)123;
unsigned char var_7 = (unsigned char)146;
signed char var_9 = (signed char)-67;
unsigned char var_11 = (unsigned char)221;
unsigned short var_12 = (unsigned short)55352;
unsigned int var_13 = 4233009956U;
int zero = 0;
int var_14 = 604334483;
long long int var_15 = -188580763120270663LL;
signed char var_16 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
