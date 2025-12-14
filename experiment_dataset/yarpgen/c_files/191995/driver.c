#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)29;
signed char var_3 = (signed char)29;
int var_10 = 1241975476;
short var_13 = (short)14594;
int zero = 0;
short var_18 = (short)9066;
signed char var_19 = (signed char)-127;
short var_20 = (short)-12439;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
