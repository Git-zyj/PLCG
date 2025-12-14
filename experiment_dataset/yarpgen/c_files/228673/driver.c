#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1352901305847237534LL;
unsigned int var_2 = 2817011464U;
signed char var_3 = (signed char)111;
unsigned short var_4 = (unsigned short)51774;
unsigned int var_6 = 4198792914U;
unsigned short var_7 = (unsigned short)12551;
unsigned char var_8 = (unsigned char)127;
unsigned short var_9 = (unsigned short)61675;
unsigned char var_11 = (unsigned char)135;
int zero = 0;
long long int var_13 = -5421179912030287652LL;
unsigned char var_14 = (unsigned char)49;
void init() {
}

void checksum() {
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
