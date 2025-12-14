#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)23;
long long int var_8 = 2536650422970195286LL;
unsigned short var_9 = (unsigned short)37292;
signed char var_14 = (signed char)-69;
int zero = 0;
unsigned char var_20 = (unsigned char)148;
unsigned long long int var_21 = 1530284885567827611ULL;
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
