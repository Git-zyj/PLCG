#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1333094021357747000LL;
long long int var_8 = -3444168196939681833LL;
long long int var_10 = 2852021379268354295LL;
long long int var_11 = 3157459329639604262LL;
int zero = 0;
unsigned long long int var_20 = 5739552844269564326ULL;
unsigned long long int var_21 = 3884981949654802411ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
