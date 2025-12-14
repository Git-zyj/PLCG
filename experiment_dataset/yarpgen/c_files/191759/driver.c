#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5581;
int var_2 = -699746621;
int var_5 = -1144272994;
signed char var_6 = (signed char)-77;
short var_7 = (short)-16740;
unsigned int var_9 = 376617623U;
int zero = 0;
unsigned int var_13 = 3009071476U;
unsigned short var_14 = (unsigned short)23282;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
