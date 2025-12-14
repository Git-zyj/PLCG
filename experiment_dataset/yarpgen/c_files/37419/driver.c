#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16052107308030723740ULL;
unsigned short var_3 = (unsigned short)45286;
unsigned char var_4 = (unsigned char)47;
long long int var_10 = -7964061932551618462LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-82;
signed char var_16 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
