#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62572;
unsigned int var_1 = 2730115914U;
unsigned long long int var_2 = 675514890549823018ULL;
unsigned long long int var_3 = 15479455971274187620ULL;
long long int var_4 = -2448055835401744706LL;
int zero = 0;
signed char var_15 = (signed char)82;
_Bool var_16 = (_Bool)0;
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
