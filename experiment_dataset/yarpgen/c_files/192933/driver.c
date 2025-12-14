#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_9 = -802242867;
unsigned short var_18 = (unsigned short)49145;
int zero = 0;
unsigned long long int var_19 = 16034770351086860730ULL;
signed char var_20 = (signed char)24;
unsigned short var_21 = (unsigned short)37290;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
