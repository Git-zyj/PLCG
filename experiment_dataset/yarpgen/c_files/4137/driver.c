#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -135273203;
unsigned char var_4 = (unsigned char)159;
unsigned char var_7 = (unsigned char)29;
int var_8 = 1693068868;
int var_9 = -1718546507;
int zero = 0;
unsigned int var_10 = 2896956889U;
short var_11 = (short)3375;
int var_12 = 1740235585;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
