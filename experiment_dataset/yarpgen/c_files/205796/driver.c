#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32532;
unsigned short var_1 = (unsigned short)13558;
signed char var_2 = (signed char)-44;
unsigned short var_7 = (unsigned short)17620;
unsigned short var_9 = (unsigned short)4781;
int zero = 0;
signed char var_10 = (signed char)51;
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
