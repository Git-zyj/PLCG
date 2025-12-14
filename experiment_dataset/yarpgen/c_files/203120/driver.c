#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-80;
unsigned char var_3 = (unsigned char)195;
int var_4 = -158305496;
int var_5 = 1387225021;
int var_6 = 1247590620;
unsigned char var_7 = (unsigned char)52;
signed char var_9 = (signed char)-80;
int zero = 0;
int var_10 = -2069469699;
_Bool var_11 = (_Bool)0;
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
