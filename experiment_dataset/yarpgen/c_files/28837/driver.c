#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19998;
unsigned long long int var_3 = 8798014092317374260ULL;
long long int var_5 = 3828121195237654132LL;
unsigned short var_9 = (unsigned short)46408;
short var_10 = (short)-22562;
signed char var_11 = (signed char)-27;
unsigned long long int var_12 = 129868776112296844ULL;
int zero = 0;
long long int var_14 = -8367844178946479087LL;
unsigned short var_15 = (unsigned short)10091;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
