#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 784484151;
unsigned short var_1 = (unsigned short)52085;
signed char var_2 = (signed char)47;
_Bool var_3 = (_Bool)0;
short var_5 = (short)15052;
unsigned long long int var_7 = 6509530137127572761ULL;
short var_8 = (short)31465;
short var_9 = (short)-20125;
int zero = 0;
short var_10 = (short)23991;
unsigned short var_11 = (unsigned short)61719;
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
