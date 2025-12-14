#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 635409497250777687ULL;
unsigned char var_1 = (unsigned char)111;
unsigned long long int var_3 = 16166721175473200893ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_12 = (unsigned short)15074;
int zero = 0;
int var_20 = 807402672;
int var_21 = -1473676097;
int var_22 = 399584340;
unsigned long long int var_23 = 18301426979029015639ULL;
int var_24 = -90255188;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
