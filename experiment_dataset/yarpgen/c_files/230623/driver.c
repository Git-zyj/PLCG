#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5816;
long long int var_5 = -8743312459877860166LL;
long long int var_7 = 775596979868760970LL;
int zero = 0;
long long int var_15 = -820600626138708177LL;
unsigned char var_16 = (unsigned char)118;
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
