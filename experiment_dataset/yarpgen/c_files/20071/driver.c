#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-21926;
unsigned long long int var_6 = 3620748818475910937ULL;
unsigned char var_7 = (unsigned char)116;
signed char var_8 = (signed char)-13;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-40;
short var_12 = (short)-32591;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
