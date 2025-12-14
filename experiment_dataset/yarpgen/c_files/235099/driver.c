#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)107;
short var_3 = (short)-19639;
signed char var_5 = (signed char)-103;
unsigned long long int var_6 = 3486168107230743906ULL;
unsigned short var_8 = (unsigned short)15191;
unsigned char var_10 = (unsigned char)207;
short var_16 = (short)23139;
int zero = 0;
signed char var_18 = (signed char)-89;
signed char var_19 = (signed char)-5;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
