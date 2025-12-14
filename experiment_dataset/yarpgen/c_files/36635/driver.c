#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 4788949168416335452LL;
signed char var_5 = (signed char)119;
unsigned short var_6 = (unsigned short)55408;
unsigned short var_7 = (unsigned short)22028;
unsigned long long int var_8 = 14433192703190637561ULL;
unsigned char var_9 = (unsigned char)111;
int zero = 0;
long long int var_10 = 6506414263869596515LL;
long long int var_11 = -1439034731098627808LL;
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
