#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 366268326U;
unsigned int var_1 = 1949920631U;
_Bool var_6 = (_Bool)1;
long long int var_7 = -2858964794413816527LL;
unsigned char var_8 = (unsigned char)112;
int zero = 0;
unsigned short var_10 = (unsigned short)14332;
unsigned long long int var_11 = 16805394917952376034ULL;
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
