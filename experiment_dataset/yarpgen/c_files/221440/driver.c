#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
short var_1 = (short)-29321;
short var_2 = (short)31582;
int var_10 = -1896706730;
int zero = 0;
signed char var_11 = (signed char)-72;
short var_12 = (short)9107;
signed char var_13 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
