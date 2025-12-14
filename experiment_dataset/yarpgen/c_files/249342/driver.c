#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 1958614354268091450ULL;
long long int var_11 = 3655462737939186169LL;
unsigned char var_13 = (unsigned char)165;
int zero = 0;
signed char var_16 = (signed char)-46;
unsigned short var_17 = (unsigned short)51286;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
