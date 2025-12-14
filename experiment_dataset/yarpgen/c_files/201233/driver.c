#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
long long int var_2 = 7553503159732964526LL;
unsigned char var_3 = (unsigned char)165;
_Bool var_7 = (_Bool)0;
int var_8 = -2131154572;
int zero = 0;
unsigned char var_11 = (unsigned char)114;
unsigned char var_12 = (unsigned char)108;
signed char var_13 = (signed char)76;
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
