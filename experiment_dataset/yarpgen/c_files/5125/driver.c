#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
unsigned int var_2 = 1075055605U;
signed char var_7 = (signed char)-72;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-101;
int zero = 0;
unsigned char var_10 = (unsigned char)132;
signed char var_11 = (signed char)119;
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
