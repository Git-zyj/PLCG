#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15355499366920731611ULL;
long long int var_2 = 7708734726874601838LL;
signed char var_6 = (signed char)-52;
unsigned int var_8 = 3393112195U;
long long int var_9 = -5982419503262367973LL;
signed char var_16 = (signed char)46;
int zero = 0;
signed char var_19 = (signed char)90;
unsigned short var_20 = (unsigned short)58910;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
