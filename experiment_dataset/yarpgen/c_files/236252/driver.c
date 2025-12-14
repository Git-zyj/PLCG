#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)89;
short var_3 = (short)-14360;
unsigned short var_6 = (unsigned short)5334;
signed char var_9 = (signed char)-45;
unsigned int var_12 = 3952982573U;
unsigned short var_13 = (unsigned short)39186;
int zero = 0;
unsigned char var_14 = (unsigned char)168;
signed char var_15 = (signed char)-7;
unsigned int var_16 = 2934488143U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
