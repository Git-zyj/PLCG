#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5648766456675926438LL;
unsigned char var_1 = (unsigned char)145;
unsigned char var_3 = (unsigned char)227;
long long int var_4 = -5073311938345837708LL;
long long int var_6 = 1683951920067918559LL;
long long int var_9 = 7338204819147681936LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 7650526249667123366LL;
long long int var_13 = -8714740393213725366LL;
int var_14 = -31402644;
void init() {
}

void checksum() {
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
