#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)68;
signed char var_5 = (signed char)-39;
unsigned char var_9 = (unsigned char)99;
signed char var_17 = (signed char)-114;
int zero = 0;
short var_18 = (short)32100;
signed char var_19 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
