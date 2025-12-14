#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)98;
unsigned short var_3 = (unsigned short)48521;
signed char var_7 = (signed char)104;
unsigned short var_8 = (unsigned short)25438;
int zero = 0;
signed char var_10 = (signed char)-25;
unsigned short var_11 = (unsigned short)26618;
signed char var_12 = (signed char)-74;
long long int var_13 = 4300763283677881381LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
