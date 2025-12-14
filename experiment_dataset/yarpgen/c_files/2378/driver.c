#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)138;
signed char var_4 = (signed char)83;
unsigned char var_7 = (unsigned char)76;
signed char var_9 = (signed char)-100;
int zero = 0;
short var_10 = (short)28176;
long long int var_11 = -2911301173250231982LL;
int var_12 = 458077994;
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
