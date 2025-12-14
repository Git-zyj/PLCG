#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7224490223386272434LL;
short var_3 = (short)-15629;
unsigned char var_4 = (unsigned char)121;
unsigned int var_6 = 1872648269U;
unsigned char var_9 = (unsigned char)216;
unsigned char var_13 = (unsigned char)39;
int zero = 0;
unsigned short var_16 = (unsigned short)13794;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)65136;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
