#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3901012434U;
long long int var_5 = -404503364627163357LL;
unsigned long long int var_6 = 15226281652408873954ULL;
signed char var_7 = (signed char)51;
short var_8 = (short)22430;
int zero = 0;
unsigned char var_10 = (unsigned char)82;
int var_11 = -1316380500;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
