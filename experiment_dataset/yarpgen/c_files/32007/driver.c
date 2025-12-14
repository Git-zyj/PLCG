#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)35;
unsigned char var_7 = (unsigned char)51;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)41;
int zero = 0;
signed char var_19 = (signed char)-97;
unsigned char var_20 = (unsigned char)138;
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
