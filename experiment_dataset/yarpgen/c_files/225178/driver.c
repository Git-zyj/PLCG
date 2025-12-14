#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
short var_2 = (short)-7427;
int var_8 = -1638842887;
unsigned char var_9 = (unsigned char)164;
unsigned char var_11 = (unsigned char)154;
int zero = 0;
signed char var_13 = (signed char)62;
unsigned char var_14 = (unsigned char)102;
int var_15 = -1049798895;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
