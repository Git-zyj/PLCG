#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2412216357U;
unsigned short var_3 = (unsigned short)40651;
unsigned long long int var_5 = 458982771893429673ULL;
unsigned long long int var_8 = 8728501131773778203ULL;
unsigned int var_9 = 3664087366U;
signed char var_10 = (signed char)125;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 2228992700654985698LL;
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
