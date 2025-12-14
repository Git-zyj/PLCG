#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1745627193U;
unsigned int var_9 = 1217245848U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_16 = 16499514766532831390ULL;
unsigned char var_17 = (unsigned char)77;
int var_19 = -996441112;
int zero = 0;
unsigned short var_20 = (unsigned short)7193;
unsigned int var_21 = 1606892767U;
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
