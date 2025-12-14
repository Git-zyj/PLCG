#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21650;
unsigned long long int var_5 = 4266039874337491709ULL;
unsigned short var_8 = (unsigned short)48121;
long long int var_10 = -1022742479371651893LL;
unsigned int var_11 = 3489409596U;
int zero = 0;
signed char var_14 = (signed char)1;
signed char var_15 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
