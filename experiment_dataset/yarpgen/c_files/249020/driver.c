#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6618636453695846073ULL;
signed char var_3 = (signed char)-39;
unsigned long long int var_8 = 1419675415236007447ULL;
int zero = 0;
short var_17 = (short)15433;
_Bool var_18 = (_Bool)1;
short var_19 = (short)32662;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
